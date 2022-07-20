#include <iostream>
using namespace std;

typedef struct {
char nama[50];
char alamat[50];
char kata[50];
int jmlhari;
int berat;
} customer;

int main(){
customer cust;
int bayar,harga;

cout <<"Program Laundry" <<endl;
cout <<"masukan nama : ";
cin >>cust.nama;
cout <<"masukan alamat : ";
cin >>cust.alamat;
cout <<"masukan jumlah hari : ";
cin >>cust.jmlhari;
cout <<"masukan berat : ";
cin >>cust.berat;

if (cust.jmlhari==1){
harga=6000;
}else{
if (cust.jmlhari==2){
harga=5000;
}else{
harga=4000;
}
}
bayar = cust.berat*harga;
cout <<"Bayar : " <<bayar;
return 0;
}
