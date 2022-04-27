#include <iostream>
using namespace std;

int main (){
	float luas, keliling,panjang,lebar;
	cout << "Masukan Panjang : ";
	cin >> panjang;
	cout << "Masukan Lebar: ";
	cin >> lebar;
	keliling = 2 * (panjang + lebar);
	luas = panjang * lebar;
	cout << "luas persegi panjang : " << luas <<  endl;
	cout << "Keliling Persegi Panjang : " << keliling << endl;
	return 0;
}
