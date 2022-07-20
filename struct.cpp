#include <iostream>
using namespace std;

struct Mahasiswa{
	string nama;
	string jurusan;
	int npm;
};

int main(){
	Mahasiswa s1;
	cout <<"masukan nama : ";
	cin >>s1.nama;
	cout <<"masukan jurusan : ";
	cin >>s1.jurusan;
	cout << "masukan NPM : ";
	cin >>s1.npm;
	
	cout <<s1.nama <<" " <<s1.jurusan <<" " <<s1.npm << endl;
	return 0;
}
