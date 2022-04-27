//algoritma latihan implementasi via c++.
#include <iostream>
//#include <conio.h>
//#include <stdlib.h>
using namespace std;
int main()
{
int pilihan;
cout << "1. hitung luas lingkaran" << endl;
cout << "2. hitung luas segitiga" << endl;
// while (pilihan>=0){
    cout << "masukan pilihan : ";
    cin >> pilihan;
    if (pilihan== 1) {
        cout << "Menghitung Luas Lingkaran" << endl;
        float r;
        cout << "Masukan jari-jari : ";
        cin >> r;
        float luas_lingkaran = 3.14*r*r;
        cout << "Luas Lingkaran : " << luas_lingkaran << endl;
    } else if(pilihan== 2) {
        cout << "Menghitung Luas segitiga" << endl;
        float a;
        cout << "Masukan alas: ";
        cin >> a;
        float t;
        cout << "Masukan tinggi : ";
        cin >> t;
        float luas_segitiga = a*t/2;
        cout << "Luas segitiga : " << luas_segitiga << endl;
    
    
    }
//getch();
}
