#include <iostream>
using namespace std;

int main() {
    int angka;
    bool prima = true; // anggap aja bilangan yang di input prima

    cout << "Masukkan bilangan: ";
    cin >> angka;

    if (angka < 2) {
        prima = false; // angka kurang dari 2 bukan bilangan prima
    } else {
        for (int i = 2; i <= angka / 2; i++) { // cek pembagi dari 2 sampai setengah angka
            if (angka % i == 0) { // kalau habis dibagi
                prima = false;
                break; // keluar loop, gak usah cek lagi
            }
        }
    }

    if (prima)
        cout << angka << " adalah bilangan prima." << endl;
    else
        cout << angka << " bukan bilangan prima." << endl;

    return 0;
}
