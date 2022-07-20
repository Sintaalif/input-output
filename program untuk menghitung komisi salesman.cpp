#include <iostream>
using namespace std;

int main(){
	int barang, jasa=0, total=0;
	float komisi=0;
	cout <<"pendapatan hari ini : ";
	cin >> barang;
	
	if (barang >= 0 && barang <= 20000){
		jasa=10000;
		komisi=0.1 * barang;
	}else if (barang <= 50000){
		jasa=20000;
		komisi=0.15 * barang;
	}else{
		jasa=30000;
		komisi=0.2 * barang;
	}
	
	total = komisi + jasa;
	cout <<"uang jasa RP. " << jasa << endl;
	cout<<"uang komisi RP. " << komisi << endl;
	cout <<"total RP. " << total; 
	
	return 0;
}
