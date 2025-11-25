#include <iostream>;
using namespace std;


int main(){
    const int tabelPerkalian = 5;
    cout << "* ";

    for(int i = 1; i <= tabelPerkalian; i++) {
        cout << i << " ";
    }
    cout << endl;

    for(int p = 1; p <= tabelPerkalian; p++){
        cout << p << " ";
        for(int s = 1; s <= tabelPerkalian; s++){
            cout << s * p << " ";
        }
        cout << endl;
    }
    

    system("pause");
    return 0;
}