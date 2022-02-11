
#include <iostream>
using namespace std;
int main(){
	
	float jumlah_bitcoin, harga_beli, harga_saat_ini,rumus_total, rumus_persen;
	cout<<"jumlah bitcoin : ";cin>>jumlah_bitcoin;
	cout<<"harga pembelian : ";cin>>harga_beli;//harga awal
	cout<<"harga saat ini : ";cin>>harga_saat_ini;//harga akhir

	cout<<"kenaikan/penurunan : "<<(( harga_saat_ini - harga_beli)/harga_beli)*100<<"%\n";
	cout<<"keuntungan/kerugian :"<<(harga_saat_ini - harga_beli)/1000000<< " juta\n";	
}
