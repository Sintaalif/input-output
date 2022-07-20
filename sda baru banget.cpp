#include <iostream>
#include "sda.h"
using namespace std; 

int main(){
	maha d1;
	
	cout <<"masukan nama : ";
	cin >>d1.nama;
	cout <<"masukan NPM : ";
	cin >>d1.NPM;
	cout <<"masukan nilai UAS : ";
	cin >>d1.UAS;
	cout <<"masukan nilai UTS : ";
	cin >>d1.UTS;
//	d1.assign(d1.UAS,d1.UTS);
	cout <<endl;
	
	//output 
	cout <<"Nama : " <<d1.nama <<endl;
	cout <<"NPM : " <<d1.NPM <<endl;
	cout <<"Nilai Akhir : " <<d1.NA() <<endl;;
	cout <<"Huruf Mutu : " <<d1.grade();
}
