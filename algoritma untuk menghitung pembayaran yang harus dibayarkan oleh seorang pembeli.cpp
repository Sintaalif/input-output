#include <iostream> 
using namespace std; 
int main () 
{ 
 char nama_barang[20]; 
 double harga,jumlah_barang,total_harga,uang,kembali; 
 cout<<"Masukkan Nama Barang :"; 
 cin>>nama_barang; 
 cout << "masukan jumlah barang : ";
 cin >> jumlah_barang;
 cout<<"Masukkan Harga Barang :"; 
 cin>>harga; 
 total_harga=jumlah_barang * harga; 
 cout<<"total harga :"<<total_harga<<endl; 
 cout<<"uang yang dibayar :"; 
 cin>>uang; 
 kembali=uang-total_harga; 
 cout<<"kembalian :"<<kembali<<endl; 
 return 0; 
}
