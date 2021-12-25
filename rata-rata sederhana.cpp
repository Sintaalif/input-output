#include <iostream.h>

#include <conio.h>
main{
    float angka, total = 0, rata;
    int jumlah;

    cout << "1. Mencari Rata-rata. (jumlah angka ditentukan)" << endl;
    cout << endl;
    cout << "masukkan jumlah angka      : "; cin >> jumlah;
    cout << endl;

    for (int i = 1; i <= jumlah; i++) {
        cout << "Masukkan angka            : "; cin >> angka;
        total = total + angka;
    }

    cout << endl;
    cout << "Total                      : " << total << endl;
    rata = total / jumlah;
    cout << "Rata-rata                 : " << rata;
    
