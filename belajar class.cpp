#include <iostream>
#include <string>

using namespace std;

//class Mahasiswa{
//	public:
//		string nama;
//		string npm;
//		string jurusan;
//		double ipk;
//		
//};

//class tanpa constructor
//class polos{
//	public:
//	string datastring;
//	int datainteger;
//};

class Mahasiswa{
	public:
		string nama;
		string npm;
		string jurusan;
		double ipk;
		
		//constuctor
//		mahasiswa(){
//			cout <<"ini adalah constructor";
//		}
		Mahasiswa(string inputnama, string inputnpm){
		npm = inputnpm;
		nama = inputnama;
		cout <<npm <<endl;
		cout <<nama <<endl;

	}
};

int main(){
//	Mahasiswa d1;
//	Mahasiswa d2;
//	d1.npm = "2117051015";
//	d1.ipk = 2.5;
//	d1.jurusan = "ilmu komputer";
//	d1.nama = "ucup";
//	d2.nama = "otong";
//	cout << d1.nama << endl;
//	cout << d2.nama << endl;
//	cout << d1.npm <<endl;
//	cout << d1.jurusan <<endl;
//	cout <<d1.ipk <<endl;

//polos d1;
//d1.datastring = "polos";
//d1.datainteger = 0;
//cout <<d1.datastring <<endl;
//cout <<d1.datainteger <<endl;
Mahasiswa d1 =Mahasiswa("ucup","2117051015");
cout <<d1.nama <<endl;
cout <<d1.npm<<endl;


	return 0;
}
