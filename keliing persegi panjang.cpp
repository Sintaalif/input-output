
#include <iostream>
using namespace std;

int main (){
	int keliling,panjang,lebar;
	cout << "Masukan Panjang : ";
	cin >> panjang;
	cout << "Masukan Lebar: ";
	cin >> lebar;
	keliling = 2 * (panjang + lebar);
	cout << "Keliling Persegi Panjang : " << keliling << endl;
	return 0;
}

