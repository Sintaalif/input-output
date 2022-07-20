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
 cout << endl; 
 cout << "nama barang " << nama_barang << endl;
 cout << "jumlah barang " << jumlah_barang << endl;
 cout << "harga barang " << harga << endl;
 cout << "total harga " << total_harga << endl;
 cout << "uang yang dibayar " << uang << endl;
 cout << "kembalian " << kembali;
 return 0; 
}
