#include <iostream>
using namespace std;
 
int main(){
 
  int total_belanja, harga_akhir,member,harga;
  float diskon;
  
  cout << "masukan jumlah : ";
  cin >> total_belanja;
  cout << "masukan harga : "
  cin >> harga;
  cout <<"memiliki kartu member ? "<<endl;
  cout << "1. punya"<<endl;
  cout << "2. tidak punya"<<endl;
  cout <<"masukan pilihan :"<<endl;
  cin >> member;
  
  if (member ==1){
  	diskon = total_belanja * 0.1;
  	cout << "total : " <<diskon;
  }
  else if (member ==2){
   cout << "total : " <<total_belanja;
  }
 
  return 0;
}
