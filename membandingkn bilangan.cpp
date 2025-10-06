#include <iostream>
using namespace std;

int main(){
    float bil1;
    float bil2;
    float bil3;
    char ulang;
    float terbesar;
    do {
        cout << "Masukkan Bil1: ";
        cin >> bil1;
        cout << "Masukkan Bil2: ";
        cin >> bil2;
        cout << "Masukkan Bil3: ";
        cin >> bil3;
        terbesar = bil1;

        if(bil2 > terbesar){
            terbesar = bil2;
        }
        if(bil3 > terbesar){
            terbesar = bil3;
        }

        cout << "Bilangan anda yang paling besar adalah: " << terbesar << endl;
        cout << "Apakah anda ingin mengulangnya?: "<< endl;
        cin >> ulang;


    } while(ulang == 'y' || ulang == 'Y');
    return 0;
}