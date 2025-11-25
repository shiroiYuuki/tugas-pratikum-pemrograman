#include <iostream>
using namespace std;
int main(){
    int bentukSegitiga;
    cout << "Masukkan Bilangan Segitiganya: ";
    cin >> bentukSegitiga;

    cout << "pola 1\n";
    
    for(int i = 1; i <= bentukSegitiga; i++){
        for(int j = bentukSegitiga; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= (2 * i - 1); k++){
            cout << "*";
        }
        cout << endl;
    }
    cout << "pola 2\n";
    
    for(int i = 1; i <= bentukSegitiga; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = bentukSegitiga; k >= (2 * i - bentukSegitiga); k--){
            cout << "*";
        }
        cout << endl;
    }
    cout << "pola 3\n";
    for(int i = 1; i <= bentukSegitiga; i++){
        for(int j = bentukSegitiga; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= (2 * i - 1); k++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 2; i <= bentukSegitiga; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = bentukSegitiga; k >= (2 * i - bentukSegitiga); k--){
            cout << "*";
        }
        cout << endl;
    }
}