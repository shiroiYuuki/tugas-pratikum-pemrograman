#include <iostream>
using namespace std;

int main(){
    long rupiah;
    const double a =  16400.0;
    double dollar;

    cout << "masukkan jumlah rupiah yang anda mau: ";
    cin >> rupiah;

    dollar = rupiah / a;
    cout << "jumlah rupiah anda jika di ubah ke dollar adalah: " << dollar << "$" << endl;

    system("pause");
    return 0;
}