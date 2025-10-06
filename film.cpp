#include <iostream>
using namespace std;

int main()
{
    int codeFilm, film, tierTiket, TingkatTiket, hasilKalkulasi, jumlahTiket, metodeBayar;
    float sesudahDiskon;
    const int kucing = 90000;
    const int bomb = 70000;
    const int rudal = 78000;
    const int korut = 65000;
    const int primium = 20000;
    const int untukOrangmiskin = 4000;

    cout << "Pilih Film: \n Film Kucing bawa ak47(1) = 90.000 \n Film bomb bawa kucing(2) = 70.000 \n Film rudal besar(3) = 78.000 \n Film penyatuan korut dengan amerika(4) = 65.000 \n";
    cout << "Masukkan Code Filmnya ";
    cin >> codeFilm;
    cout << "mau beli berapa tiket?: ";
    cin >> jumlahTiket;
    cout << "Apakah anda ingin tiket primium(1) = 20000 atau untuk reguler?(2) = 4000: ";
    cin >> tierTiket;

    if (codeFilm == 1)
    {
        film = kucing;
    }
    else if (codeFilm == 2)
    {
        film = bomb;
    }
    else if (codeFilm == 3)
    {
        film = rudal;
    }
    else if (codeFilm == 4)
    {
        film = korut;
    }
    else
    {
        cout << "Kode film tidak valid!\n";
        return 0;
    }

    if (tierTiket == 1)
    {
        TingkatTiket = primium;
    }
    else if (tierTiket == 2)
    {
        TingkatTiket = untukOrangmiskin;
    }
    else
    {
        cout << "Kode tiket tidak valid!\n";
        return 0;
    }

    TingkatTiket = TingkatTiket * jumlahTiket;
    hasilKalkulasi = TingkatTiket + film;

    if (jumlahTiket >= 4)
    {
        sesudahDiskon = hasilKalkulasi - (hasilKalkulasi * 0.30);
        cout << "\nAnda mendapatkan diskon 30% karena membeli 4 atau lebih tiket!\n";
        cout << "Harga sebelum diskon: " << hasilKalkulasi << endl;
        cout << "Harga setelah diskon: " << sesudahDiskon << endl;
    }
    else
    {
        cout << "\nTotal harga: " << hasilKalkulasi << endl;
    }
    cout << "anda ingin bayar pakai uang(1), transfer(2) atau hutang(3)? masukkan codenya: ";
    cin >> metodeBayar;

    cout << "\n==========================================\n";
    cout << "               BIOSKOP CHOCOWI             \n";
    cout << "==========================================\n";
    cout << "Film             : " << codeFilm << endl;
    cout << "Jumlah Tiket     : " << jumlahTiket << " lembar" << endl;
    cout << "Jenis Tiket      : " << (tierTiket == 1 ? "Premium" : "Reguler") << endl;
    cout << "Harga per Tiket  : Rp" << (tierTiket == 1 ? primium : untukOrangmiskin) << endl;
    cout << "Harga Film       : Rp" << film << endl;
    cout << "------------------------------------------\n";
    cout << "Total Sebelum Diskon : Rp" << hasilKalkulasi << endl;

    if (jumlahTiket >= 4)
    {
        cout << "Diskon 30%            : Rp" << (hasilKalkulasi * 0.30) << endl;
        cout << "Total Setelah Diskon  : Rp" << sesudahDiskon << endl;
    }
    else
    {
        cout << "Total Pembayaran      : Rp" << hasilKalkulasi << endl;
    }

    cout << "------------------------------------------\n";
    cout << "Metode Pembayaran     : ";
    if (metodeBayar == 1)
        cout << "Tunai (Cash)" << endl;
    else if (metodeBayar == 2)
        cout << "Transfer Bank" << endl;
    else if (metodeBayar == 3)
        cout << "Hutang Dulu Bro" << endl;
    else
        cout << "Metode Tidak Dikenal" << endl;

    cout << "------------------------------------------\n";
    cout << "Terima kasih telah menonton di BIOSKOP CHOCOWI\n";
    cout << "    Jangan lupa beli popcorn ya!\n";
    cout << "==========================================\n\n";

    system("pause");
}