#include <iostream>
#include "mahasewa.h"
using namespace std; 


int main(){
	maha m1; 
	
	cout << "Nama\t\t : "; cout << m1.getNama() <<endl;
	cout << "NPM\t\t : "; cout << m1.getNpm() <<endl; 
	cout << "Nilai Akhir\t : "; cout << m1.nilaiAkhir() <<endl; 
	cout << "Huruf Mutu\t : "; cout << m1.hurufMutu(); 
}
