 //algoritme kalkulator untuk operasi dasar matematika (perkalian, pembagian, pengurangan dan penjumlahan) untuk 2 bilangan.
#include <iostream>
using namespace std;

int main(){
	
int pilihan;
int a,b;
int hasil;

cout << "1. perkalian" << endl;
cout << "2. pambagian" << endl;
cout << "3. pengurangan" << endl;
cout << "4. penjumlahan" << endl; 
cout << "Masukan pilihan :";	
cin >> pilihan;
  if (pilihan== 1){
  	cout << "perkalian" << endl;
  	cout << "masukan angka : "<< endl;
  	cin >> a >> b;
    hasil = a * b ;
  	cout << "hasil :" << hasil;
  } else if(pilihan== 2){
  	cout << "pembagian" << endl;
  	cout << "masukan angka : "<< endl;
    cin >> a >> b;
    hasil = a / b ;
  	cout << "hasil :" << hasil;
  }else if(pilihan== 3){
  	cout << "pengurangan" << endl;
  	cout << "masukan angka : " << endl;
    cin >> a >> b;
    hasil = a - b ;
  	cout << "hasil :" << hasil;
  }else if(pilihan== 4){
  	cout << "penjumlahan" << endl;
  	cout << "masukan angka : " << endl;
   cin >> a >> b;
    hasil = a + b ;
  	cout << "hasil :" << hasil;
  }
return 0;
 }
