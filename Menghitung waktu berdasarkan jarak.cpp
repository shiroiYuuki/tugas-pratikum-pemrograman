#include <iostream>
using namespace std;

int main() {
    int waktu, jarak, kecepatan;

    cout << "masukkan jaraknya: ";
    cin >> jarak;

    cout << "masukkan kecepatannya: ";
    cin >> kecepatan;

    waktu = jarak / kecepatan;
    cout << "waktu yang di butuhkan adalah: " << waktu << " jam"<< endl;
    
    system("pause");
    return 0;    
}