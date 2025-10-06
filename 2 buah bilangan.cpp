#include <iostream>
using namespace std;

int main(){
    int Bil1, Bil2, hasil;
    cout << "Masukkan Bilangan Yang anda ingin jumlahkan: " << endl;
    cin >> Bil1;

    cout << "Masukkan Bilangan Yang anda ingin jumlahkan selanjutnya: " << endl;
    cin >> Bil2;
    hasil = Bil1 + Bil2;

    cout << "jumlah bilangan anda adalah: " << hasil;
    system("pause");
    return 0;
}