#include <iostream>
using namespace std;

int main() {
    long long nisn[] = {9950310962, 9952382180, 9960312699, 9963959682, 9965653989, 9970272750, 9970293945};
    int ukuran = 7;

    long long cari = 9950310962;
    int kiri = 0;
    int kanan = ukuran - 1;
    int ditemukan = -1;

    while (kiri <= kanan) {
        int tengah = (kiri + kanan) / 2;
        if (nisn[tengah] == cari) {
            ditemukan = tengah;
            break;
        } else if (nisn[tengah] < cari) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }

    if (ditemukan != -1)
        cout << "NISN ditemukan di index ke-" << ditemukan << endl;
    else
        cout << "NISN tidak ditemukan" << endl;

    return 0;

    system("pause");
}
