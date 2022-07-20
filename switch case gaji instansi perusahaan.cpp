#include <iostream>
using namespace std;

int main(){
	int golongan, jam_kerja, total_gaji;
	
	cout <<"masukan golongan : ";
	cin >> golongan;
	cout <<"masukan jumlah jam kerja :";
	cin >> jam_kerja;
	
	switch (golongan){
		case 1:
		total_gaji = 10000 * jam_kerja;
		cout <<"total gaji : " << total_gaji;
			break;
		case 2:
		total_gaji = 15000 * jam_kerja;
		cout <<"total gaji : " << total_gaji;
			break;
		case 3:
		total_gaji = 20000 * jam_kerja;
		cout <<"total gaji : " << total_gaji;
			break;
		case 4:
		total_gaji = 25000 * jam_kerja;
		cout <<"total gaji : " << total_gaji;
			break;
		case 5:
		total_gaji = 30000 * jam_kerja;
		cout <<"total gaji : " << total_gaji;
			break;	

	}
	
	return 0;
}
