#include <iostream>
using namespace std;

int main() {
    int desimal;
    char biner[32];
    int index = 0;

    cout << "Masukkan bilangan desimal: ";
    cin >> desimal;

    if (desimal == 0) {
        cout << "Bentuk biner: 0" << endl;
        system("pause");
        return 0;
    }

    int temp = desimal;
    while (temp > 0) {
        int sisa = temp % 2;
        biner[index] = sisa + '0';
        temp /= 2;
        index++;
    }

    biner[index] = '\0';

    cout << "Bentuk biner dari " << desimal << " adalah: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << biner[i];
    }

    cout << endl;
    system("pause");
    return 0;
}
