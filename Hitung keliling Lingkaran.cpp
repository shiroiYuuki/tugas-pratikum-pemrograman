#include <iostream>
#define PI 3.14159  // konstanta PI

int main() {
    float jariJari; // membuat variable kosong

    std::cout << "Masukkan jari-jari lingkaran: "; //menampilkan output
    std::cin >> jariJari; // user menambahkan data di variable jariJari

    float luas = PI * jariJari * jariJari; // hitung luas lingkaran dengan rumus π × r × r

    std::cout << "Luas lingkaran: " << luas << std::endl;

    return 0;
}