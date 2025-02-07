#include <iostream>
#include <cmath>
using namespace std;

// Fungsi untuk menghitung luas persegi
double luas_persegi(double sisi) {
    return sisi * sisi;
}

// Fungsi untuk menghitung luas segitiga
double luas_segitiga(double alas, double tinggi) {
    return 0.5 * alas * tinggi;
}

// Fungsi untuk menghitung luas lingkaran
double luas_lingkaran(double radius) {
    return M_PI * radius * radius;
}

// Fungsi untuk menghitung volume kubus
double volume_kubus(double sisi) {
    return pow(sisi, 3);
}

// Fungsi untuk menghitung volume balok
double volume_balok(double p, double l, double t) {
    return p * l * t;
}

// Fungsi untuk menghitung volume bola
double volume_bola(double radius) {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

int main() {
    int pilihan;
    double sisi, alas, tinggi, radius, panjang, lebar, tinggi_balok;
    
    string menu[] = {
        "1. Luas Persegi",
        "2. Luas Segitiga",
        "3. Luas Lingkaran",
        "4. Volume Kubus",
        "5. Volume Balok",
        "6. Volume Bola",
        "7. Keluar"
    };

    do {
        cout << "Pilih rumus bangun datar/ruang : " << endl;
        for (string item : menu) {
            cout << item << endl;
        }
        cout << "Masukkan pilihan (1-7): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan panjang sisi: ";
                cin >> sisi;
                cout << "Luas Persegi: " << luas_persegi(sisi) << endl;
                break;
            case 2:
                cout << "Masukkan alas: ";
                cin >> alas;
                cout << "Masukkan tinggi: ";
                cin >> tinggi;
                cout << "Luas Segitiga: " << luas_segitiga(alas, tinggi) << endl;
                break;
            case 3:
                cout << "Masukkan radius: ";
                cin >> radius;
                cout << "Luas Lingkaran: " << luas_lingkaran(radius) << endl;
                break;
            case 4:
                cout << "Masukkan panjang sisi kubus: ";
                cin >> sisi;
                cout << "Volume Kubus: " << volume_kubus(sisi) << endl;
                break;
            case 5:
                cout << "Masukkan panjang: ";
                cin >> panjang;
                cout << "Masukkan lebar: ";
                cin >> lebar;
                cout << "Masukkan tinggi: ";
                cin >> tinggi_balok;
                cout << "Volume Balok: " << volume_balok(panjang, lebar, tinggi_balok) << endl;
                break;
            case 6:
                cout << "Masukkan radius: ";
                cin >> radius;
                cout << "Volume Bola: " << volume_bola(radius) << endl;
                break;
            case 7:
                cout << "Keluar dari program. Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        }
    } while (pilihan != 7);

    return 0;
}