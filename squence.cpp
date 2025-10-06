#include <iostream>
using namespace std;

int main() {
    int angka;
    char nilai;
    char ulang;
    do{
        cout << "Masukkan Angkanya: " << endl;
        cin >> angka;
        if(angka >= 85 && angka <= 100){
            nilai = 'A';
            cout << "Nah hasil nya adalah " << nilai << endl;
        }   else if(angka >= 70 && angka <= 84){
            nilai = 'B';
            cout << "Nah hasil nya adalah " << nilai << endl;
        } else if(angka >= 40 && angka <= 69){
            nilai = 'C';
            cout << "Nah hasil nya adalah " << nilai << endl;
        } else if(angka >= 20 && angka <= 39){
            nilai = 'D';
            cout << "Nah hasil nya adalah " << nilai << endl;
        } else{
            nilai = 'E';
            cout << "Nah hasil nya adalah " << nilai << endl;
        }
        cout << "ulang gk bang?: ";
        cin >> ulang;
    } while(ulang == 'y');
    return 0;
}
