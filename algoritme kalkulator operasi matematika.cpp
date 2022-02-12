 //algoritme kalkulator untuk operasi dasar matematika (perkalian, pembagian, pengurangan dan penjumlahan) untuk 2 bilangan.
 #include <iostream>
 using namespace std;
 int main(){
int pilihan;
int a;
int b;

cout << "1. perkalian" << endl;
cout << "2. pambagian" << endl;
cout << "3. pengurangan" << endl;
cout << "4. penjumlahan" << endl; 
cout << "Masukan pilihan :";	
cin >> pilihan;
  if (pilihan== 1){
  	cout << "perkalian" << endl;
  	cout << "masukan angka : "<< endl;
  	cout << " a = ";
  	cin >> a;
  	cout << " b = ";
  	cin >> b;
  	cout << " a * b = ";
  	cout << (a * b )  << endl;
  } else if(pilihan== 2){
  	cout << "pembagian" << endl;
  	cout << "masukan angka : "<< endl;
  	cout << " a = ";
  	cin >> a;
  	cout << " b = ";
  	cin >> b;
  	cout << " a / b = " << endl;
  	cout << (a / b )  << endl;
  }else if(pilihan== 3){
  	cout << "pengurangan" << endl;
  	cout << "masukan angka : " << endl;
  	cout << " a = ";
  	cin >> a;
  	cout << " b = ";
  	cin >> b;
  	cout << " a - b = ";
  	cout << (a - b) << endl;
  }else if(pilihan== 4){
  	cout << "penjumlahan" << endl;
  	cout << "masukan angka : " << endl;
  	cout << " a = ";
  	cin >> a;
  	cout << " b = ";
  	cin >> b;
  	cout << " a + b = ";
  	cout << (a + b);
  }

 }
