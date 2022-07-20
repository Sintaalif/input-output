#include <iostream>
#include "mahasiswa.h"
using namespace std; 


int main(){
	maha d1; 
	
	cout << "Nama : " << d1.getNama() <<endl;
	cout << "NPM : " << d1.getNpm() <<endl; 
	cout << "Nilai Akhir : " << d1.NA() <<endl; 
	cout << "Huruf Mutu : " << d1.hurufMutu(); 
}
