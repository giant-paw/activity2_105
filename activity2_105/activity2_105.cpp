
#include <iostream>
using namespace std;

float persegiPanjang(float p, float l) {
    return p * l;
}

float lingkaran(float r) {
    return 3.14 * r * r;
}

float segitiga(float a, float t) {
    return 0.5 * a * t;
}

int main()
{
    float nilai[10];
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    bool menu;
    menu = true;

    while (menu == true) {

        cout << "\n\n================================\n";
        cout << "\tM E N U";
        cout << "\n================================\n";

        cout << "1. Luas Persegi Panjang";
        cout << "\n2. Luas Lingkaran";
        cout << "\n3. Luas Segitiga";
        cout << "\n4. Array\n";
        cout << "5. Keluar";

        cout << "\n\nMasukkan pilihan (1/2/3/4) : ";
        cin >> pilihan;


        switch (pilihan) {
        case 1: 
            cout << "\n\nMasukkan panjang : ";
            cin >> panjang;
            cout << "\nMasukkan Lebar: ";
            cin >> lebar;
            cout << "\nLuas Persegi Panjang = " << persegiPanjang(panjang, lebar);
            break;

        case 2:
            cout << "\n\nMasukkan Jari - Jari : ";
            cin >> jejari;
            cout << "\n Luas Lingkaran = " << lingkaran(jejari);
            break;

        case 3:
            cout << "\n\nMasukkan Alas : ";
            cin >> alas;
            cout << "\nMasukkan Tinggi : ";
            cin >> tinggi;
            cout << "\nLuas Segitiga = " << segitiga(alas, tinggi);
            break;

        case 4:
            cout << "\n\nMengisi Array";
            for (int i = 0; i < 10; i++) {
                cout << "\nNilai ke-" << (i + 1) << ": ";
                cin >> nilai[i];
            }

            cout << "\nMembaca Isi Array";
            for (int i = 0; i < 10; i++) {
                cout << "\nNilai ke-" << (i + 1) << ": " <<  nilai[i];
            }
            break;

        case 5:
            menu = false;
            break;

        default : 
            cout << "Pilihan Salah !!";
            break;
        }
    }
}
