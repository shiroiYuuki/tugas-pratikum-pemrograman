#include <iostream>
#include <string>
using namespace std;

int main() {
    int jadwalSholat[5][2] = {
        {4, 30},
        {12, 0},
        {15, 30},  
        {18, 15}, 
        {19, 45}
    };
    string namaSholat[5] = {"Subuh", "Dzuhur", "Ashar", "Maghrib", "Isya"};

    cout << "=== PENENTU WAKTU SHOLAT ===\n";
    int jamSekarang, menitSekarang;
    cout << "Masukkan jam sekarang: ";
    cin >> jamSekarang;
    cout << "Masukkan menit sekarang: ";
    cin >> menitSekarang;

    if (jamSekarang < 0 || jamSekarang > 23 || menitSekarang < 0 || menitSekarang > 59) {
        cout << "Waktu tidak valid. Program keluar.\n";
        return 0;
    }

    cout << "\nJADWAL SHOLAT HARI INI:\n";
    for (int i = 0; i < 5; i++) {
        int j = jadwalSholat[i][0];
        int m = jadwalSholat[i][1];
        cout << (i + 1) << ". " << namaSholat[i] << " : ";
        if (j < 10) cout << "0";
        cout << j << ":";
        if (m < 10) cout << "0";
        cout << m << "\n";
    }

    int sekarangMenit = jamSekarang * 60 + menitSekarang;

    int indexBerikut = -1;
    for (int i = 0; i < 5; i++) {
        int jadwalMenit = jadwalSholat[i][0] * 60 + jadwalSholat[i][1];
        if (jadwalMenit >= sekarangMenit) {
            indexBerikut = i;
            break;
        }
    }

    int jadwalBerikutMenit;
    if (indexBerikut == -1) {
        indexBerikut = 0;
        jadwalBerikutMenit = jadwalSholat[0][0] * 60 + jadwalSholat[0][1] + 24 * 60;
    } else {
        jadwalBerikutMenit = jadwalSholat[indexBerikut][0] * 60 + jadwalSholat[indexBerikut][1];
    }

    int selisihMenit = jadwalBerikutMenit - sekarangMenit;
    int jamTersisa = selisihMenit / 60;
    int menitTersisa = selisihMenit % 60;

    cout << "\nSholat berikutnya: " << namaSholat[indexBerikut] << " (";
    int jamTampil = jadwalSholat[indexBerikut][0];
    int menitTampil = jadwalSholat[indexBerikut][1];
    if (jamTampil < 10) cout << "0";
    cout << jamTampil << ":";
    if (menitTampil < 10) cout << "0";
    cout << menitTampil << ")\n";

    if (selisihMenit == 0) {
        cout << "Waktu tersisa: sekarang waktu sholat tiba.\n";
    } else {
        cout << "Waktu tersisa: ";
        if (jamTersisa > 0) cout << jamTersisa << " jam ";
        cout << menitTersisa << " menit lagi\n";
    }

    return 0;
}
