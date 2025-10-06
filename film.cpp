#include <iostream>
using namespace std;

int main(){
    int codeFilm, tierTiket, film, hasilKalkulasi, jumlahTiket;
    const float kucing = 90000;
    const float bomb = 70000;
    const float rudal = 78000;
    const float korut = 65000;
    const float primium = 20000;
    const float untukOrangmiskin = 4000;

    cout << "Pilih Film: \n Film Kucing bawa ak47(1) = 90.000 \n Film bomb bawa kucing(2) = 70.000 \n Film rudal besar(3) = 78.000 \n Film penyatuan korut dengan amerika(4) = 65.000 \n";
    cout << "Masukkan Code Filmnya ";
    cin >> codeFilm;
    cout << "mau beli berapa tiket?: ";
    cin >> jumlahTiket;
    cout << "Apakah anda ingin tiket primium(1) = 20000 atau untuk reguler?(2) = 4000: ";
    cin >> tierTiket;

    if(codeFilm == 1) {
        film = kucing;
    } else if(codeFilm == 2){
        film = bomb;
    } else if(codeFilm == 3){
        film = rudal;
    } else if(codeFilm == 4){
        film = korut;
    }

    hasilKalkulasi = 
    if(tierTiket == 1) {
        tierTiket = primium;
    } else if(tierTiket == 2){
        tierTiket = untukOrangmiskin;
    }

    hasilKalkulasi = film + tierTiket;
    cout << hasilKalkulasi;

}