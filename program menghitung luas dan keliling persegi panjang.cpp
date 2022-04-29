#include <iostream>
using namespace std;

int main (){
	int luas, keliling,panjang,lebar;
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
ALGORITMA MENGHITUG LUAS DAN KELILING PERSEGI PANJANG
{menghitung luas dan keliling persegi panjang dari piranti masukan}

DEKLARASI
panjang : integer { mendeklarasikan panjang}
luas : integer {mendeklarasikan luas}
keliling : integer { mendeklarasikan keliling}
lebar : integer {mendeklarasikan lebar}

DESKRIPSI
read (panjang) {input panjang}
read (lebar) {input lebar}

keliling <- 2 * (panjang + lebar) { proses menghitung keliling persegi panjang}
luas <- panjang * lebar {proses menghitung luas persegi panjang}

write (luas) {hasil output luas}
write (keliling) { hasil output keliling}
