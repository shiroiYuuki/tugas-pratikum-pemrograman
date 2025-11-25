#include <iostream>
using namespace std;

int main(){
    // =============================
    for (char fhor = 'A'; fhor <= 'F'; fhor++)
    {
        cout << fhor << " ";
    }

    cout << endl;

    // =============================
    char while1 = 'A';
    while (while1 <= 'F')
    {
        cout << while1;
        while1++;
    }
    cout << endl;
    // =============================
    char doWhile = 'A';
    do
    {
        cout << doWhile << " ";
        doWhile++;
    } while (doWhile <= 'F');

    return 0;
}