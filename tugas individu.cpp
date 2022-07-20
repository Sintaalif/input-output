#include <iostream>
using namespace std;

struct Mahasiswa{
 	char NPM[9];
 	char nama[30];
 	float ipk;
};

int main(){
Mahasiswa mhs;

cout <<"NPM = ";
cin >> mhs.NPM;
cout <<"Nama = ";
cin >>mhs.nama;
cout <<"IPK = ";
cin >>mhs.ipk;
cout <<endl;
cout <<"Data Anda : ";
cout <<"NPM : " <<mhs.NPM <<endl;
cout <<"Nama : " <<mhs.nama <<endl;
cout <<"Ipk : " <<mhs.ipk <<endl;

}


