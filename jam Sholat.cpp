#include <iostream>
using namespace std;

int main() {
    // 1) Simpan jadwal sholat (jam, menit) di array 2D
    int jadwal[5][2] = {
        {4, 30},   // Subuh
        {12, 0},   // Dzuhur
        {15, 30},  // Ashar
        {18, 15},  // Maghrib
        {19, 45}   // Isya
    };

    // 2) Nama sholat (satu per indeks)
    string nama[5] = {"Subuh", "Dzuhur", "Ashar", "Maghrib", "Isya"};

    // 3) Input waktu sekarang dari pengguna
    int jamSekarang, menitSekarang;
    cout << "=== PENENTU WAKTU SHOLAT (VERSI PEMULA) ===\n";
    cout << "Masukkan jam sekarang (0-23): ";
    cin >> jamSekarang;
    cout << "Masukkan menit sekarang (0-59): ";
    cin >> menitSekarang;

    // (Sederhana) jika input di luar rentang, kita koreksi sedikit
    if (jamSekarang < 0) jamSekarang = 0;
    if (jamSekarang > 23) jamSekarang = jamSekarang % 24;
    if (menitSekarang < 0) menitSekarang = 0;
    if (menitSekarang > 59) menitSekarang = menitSekarang % 60;

    // 4) Ubah waktu sekarang jadi total menit sejak tengah malam
    int sekarangMenit = jamSekarang * 60 + menitSekarang;

    // 5) Tampilkan jadwal sholat (sederhana)
    cout << "\nJADWAL SHOLAT HARI INI:\n";
    for (int i = 0; i < 5; ++i) {
        int j = jadwal[i][0];
        int m = jadwal[i][1];
        // tampilkan jam:menit dengan 2 digit untuk menit
        if (j < 10) cout << "0";
        cout << j << ":";
        if (m < 10) cout << "0";
        cout << m;
        cout << "  -> " << nama[i] << "\n";
    }

    // 6) Cari sholat berikutnya (loop dari awal)
    int idxBerikut = -1;       // akan menyimpan indeks sholat berikut
    int waktuSholatMenit = 0;  // waktu sholat berikut dalam menit
    for (int i = 0; i < 5; ++i) {
        int t = jadwal[i][0] * 60 + jadwal[i][1]; // konversi jam:menit jadi menit
        if (t >= sekarangMenit) { // jika jadwal belum lewat
            idxBerikut = i;
            waktuSholatMenit = t;
            break; // keluar loop, ambil yang pertama yang belum lewat
        }
    }

    // 7) Jika semuanya sudah lewat (mis. jam 20:00), pilih Subuh besok
    if (idxBerikut == -1) {
        idxBerikut = 0;
        // tambahkan 24*60 menit agar selisih dihitung keesokan hari
        waktuSholatMenit = jadwal[0][0] * 60 + jadwal[0][1] + 24 * 60;
    }

    // 8) Hitung selisih menit antara sekarang dan sholat berikutnya
    int selisihMenit = waktuSholatMenit - sekarangMenit;
    int jamTersisa = selisihMenit / 60;
    int menitTersisa = selisihMenit % 60;

    // 9) Ambil jam dan menit sholat berikutnya (untuk ditampilkan)
    int jamSholat = jadwal[idxBerikut][0] % 24; // %24 supaya jika besok tetap 0-23
    int menitSholat = jadwal[idxBerikut][1];

    // 10) Tampilkan hasil sederhana dan mudah dimengerti
    cout << "\nSholat berikutnya: " << nama[idxBerikut] << " (";
    if (jamSholat < 10) cout << "0";
    cout << jamSholat << ":";
    if (menitSholat < 10) cout << "0";
    cout << menitSholat << ")\n";

    if (selisihMenit == 0) {
        cout << "Waktu tersisa: 0 menit (sekarang waktu sholat).\n";
    } else if (jamTersisa > 0) {
        cout << "Waktu tersisa: " << jamTersisa << " jam " << menitTersisa << " menit lagi\n";
    } else {
        cout << "Waktu tersisa: " << menitTersisa << " menit lagi\n";
    }

    return 0;
}
