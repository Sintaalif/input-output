#include <iostream>
using namespace std;

int main(){
	int angka, jumlah, max, min;
	cin >> jumlah;
	
	for (int i = 1; i <= jumlah; i++){
		cin >> angka;
		
		if (i == 1){
			min = angka;
			max = angka;
		}else if (min > angka){
			min = angka;
		}else if (max < angka){
			max = angka;
		}else{}
	}
	cout <<"nilai terbesar : "<< max << endl;
	cout <<"nilai terkecil : "<< min << endl;

	return 0;
}
