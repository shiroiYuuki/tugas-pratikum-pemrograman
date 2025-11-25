#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string formatRupiah(long long angka);

int main() {
    double nisabGram = 85.0;
    double kadarZakat = 0.025;
    double hargaEmas = 1000000.0;

    double harta;
    cout << "=== PROGRAM PENGHITUNG ZAKAT MAAL ===" << endl;
    cout << "Masukkan jumlah harta (Rp): ";
    cin >> harta;

    double nisabRupiah = nisabGram * hargaEmas;

    cout << fixed << setprecision(0);

    cout << "\nNisab zakat: Rp " << formatRupiah(nisabRupiah) << endl;
    cout << "Harta Anda: Rp " << formatRupiah(harta) << endl;

    if (harta >= nisabRupiah) {
        double zakat = harta * kadarZakat;
        cout << "Status: WAJIB ZAKAT" << endl;
        cout << "Jumlah zakat yang harus dibayar: Rp " << formatRupiah(zakat) << endl;
    } else {
        cout << "Status: TIDAK WAJIB ZAKAT" << endl;
        cout << "Karena harta belum mencapai nisab." << endl;
    } 
    return 0;
}

string formatRupiah(long long angka) {
    string duit = to_string(angka);
    int posisi = duit.length() - 3;
    while (posisi > 0) {
        duit.insert(posisi, ".");
        posisi -= 3;
    }
    return duit;
}