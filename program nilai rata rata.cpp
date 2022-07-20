#include <iostream>
using namespace std;
 int main(){
 	int angka, total = 0, rata, jumlah;

    cout << "masukkan jumlah angka      : ";
	cin >> jumlah;
    cout << endl;

    for (int i = 1; i <= jumlah; i++) {
        cout << "Masukkan angka            : "; 
		cin >> angka;
        total = total + angka;
    }

    cout << endl;
    cout << "Total                      : " << total << endl;
    rata = total / jumlah;
    cout << "Rata-rata                 : " << rata;
 }
