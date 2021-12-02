#include <iostream>

using namespace std;
int main(){
	/* Nama  : Sinta Nurhalifah
   	NPM      : 2117051015
	Kelas    : B 2021 */
	
	//string//
	string Nama;
	string Alamat;
	string Email;
	string Nomor;
	
	//input//
	cout<<"Nama Pelanggan  : ";
	getline(cin,Nama);
	cout<<"Alamat Rumah    : ";
	getline(cin,Alamat);
	cout<<"Email Pelanggan : ";
	getline(cin,Email);
	cout<<"Nomor Telepon   : ";
	getline(cin,Nomor);
	
	
	
	//output//
	cout<<endl;
	cout<<"Nama Pelanggan "<<Nama <<endl;
	cout<<"Alamat Rumah "<<Alamat <<endl;
	cout<<"Email Pelanggan "<<Email <<endl;
	cout<<"Nomor Telepon "<<Nomor <<endl;
		return 0;
	
}
