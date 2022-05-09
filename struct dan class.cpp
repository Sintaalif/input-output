#include <iostream>
using namespace std;

typedef double d;

struct Mahasiswa {
	string nama;
	string npm;
	int nilai;
};

class Dosen{
	void setNama(string santi){
		nama =santi;
	}
	
	string getNama(){
		return nama;
	}
	public:
	string nama;
	string npm;
	
	void cetak(){
		cout << nama << endl;
		cout <<npm << endl;
	}
	
	Dosen (){
		
	}
};
void setNilai(double n){
	if(n<0 || n> 100){
	nilai=0;
		cout <<"nilai tidak valid"<<endl;
	}else{
	nilai =n;
	}
}

double getNilai(){
	return nilai;
};



int main(){
	d angka =1.0;
	
	Mahasiswa m1;
	m1.nama ="sinta";
	m1.npm ="123";
	m1.nilai =12;
	
	Dosen d1;
	d1.nama ="sinta";
	d1.cetak();
//	d1.setNama("santo");
	
	
	cout << angka;
	cout <<m1.nama <<endl;
	cout <<m1.npm <<endl;
	cout <<m1.nilai <<endl;
	cout <<d1.nama <<endl;
//	cout <<d1.getNama() <<endl;

	
	return 0;
}
