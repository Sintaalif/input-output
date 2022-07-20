#include <iostream>
using namespace std;

struct Mahasiswa{
	char NPM[10];
	char nama[10];
	char alamat[10];
	char jurusan[10];
	int ipk;
	
};

int main(){
	int n=0,a=0,pilih;
	Mahasiswa mhs[10];
	
	cout <<"1.memasukan nilai ipk mahasiswa"<<endl;
	cout <<"2.memasukan data mahasiswa"<<endl;
	cout <<"masukan pilihan :";
	cin >>pilih;
	if(pilih==1){
	cout<<"masukan jumlah data mahasiswa:";
	cin >>a;
	for(int i=1; i<=a; i++){
		cout <<"Nama = ";
		cin >>mhs[i].nama;
		cout <<"IPK =";
		cin >>mhs[i].ipk;
		cout <<endl;
	}
	for(int i=1; i<=a; i++){
		cout <<mhs[i].nama <<" "<<mhs[i].ipk<<endl;
	}
	
	}else if(pilih==2){
	cout <<"masukan jumlah data mahasiswa :";
	cin >>n;
	for(int i=1; i<=n; i++){
		cout <<"Npm = ";
		cin >>mhs[i].NPM;
		cout <<"Nama = ";
		cin >>mhs[i].nama;
		cout <<"Alamat = ";
		cin >>mhs[i].jurusan;
		cout <<endl;
	}
	for(int i=1; i<=n; i++){
		cout <<mhs[i].NPM <<" "<<mhs[i].nama<<" "<<mhs[i].jurusan<<endl;
	}
}


}
