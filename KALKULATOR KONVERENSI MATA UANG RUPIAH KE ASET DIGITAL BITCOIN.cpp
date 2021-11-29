#include <iostream>

using namespace std;
int main(){
	
	
	
	//KALKULATOR KONVERENSI MATA UANG RUPIAH KE ASET DIGITAL BITCOIN//
	
	//string//
	string TanggalTransaksi ;
	string BulanTransaksi ;
	string TahunTransaksi ;
	float JumlahUang ;
	float HargaBitCoin ;
	
	
	//input//
	cin>> TanggalTransaksi ;
	cin>> BulanTransaksi ;
	cin>> TahunTransaksi ;
	cin>> JumlahUang ;
	cin>> HargaBitCoin ;
	
	
	//output//
	cout<< endl ;
	cout<< "Tanggal Transaksi : "<< TanggalTransaksi << " " << BulanTransaksi << " " << TahunTransaksi << endl ;
	cout<< "Jumlah Bitcoin    : "<< JumlahUang/HargaBitCoin << " " << "BitCoin" << endl ;

	
return 0;	
}
	
	
	
	


