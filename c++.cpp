#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double bil1, bil2, hasil;
    string var_operator;

    cout << "Masukkan Bilangan Pertama:" << endl;
    cin >> bil1;
    cout << "Masukkan Operatornya (- + * /)" << endl;
    cin >> var_operator;
    cout << "Masukkan Bilangan kedua" << endl;
    cin >> bil2;
    if (var_operator == "+") {
        hasil = bil1 + bil2;
        cout << bil1 << " + " << bil2 << " adalah " << hasil << endl;
    } else {
        if (var_operator == "-") {
            hasil = bil1 - bil2;
            cout << bil1 << " - " << bil2 << " adalah " << hasil << endl;
        } else {
            if (var_operator == "*") {
                hasil = bil1 * bil2;
                cout << bil1 << " x " << bil2 << " adalah " << hasil << endl;
            } else {
                if (var_operator == "/") {
                    if (bil1 == 0 || bil2 == 0) {
                        cout << "Tidak bisa dibagi dengan nol dong! wahai sahabat" << endl;
                    }
                    hasil = bil1 / bil2;
                    cout << bil1 << " / " << bil2 << " adalah " << hasil << endl;
                }
            }
        }
    }
    return 0;
    system("pause");
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
