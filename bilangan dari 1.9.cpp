#include <iostream>
using namespace std;

int main() {
    // =============================
for(int fhor = 0;fhor <= 9; fhor++){
    cout << fhor << " ";
}

cout << endl;

    // =============================
int while1 = 1;
while(while1 < 10){ 
    cout << while1;
    while1++;
}
cout << endl;
    // =============================
int doWhile = 0;
do {
    cout << doWhile << " ";
    doWhile++;
} while(doWhile <= 9);

return 0;

}