#include <iostream>
using namespace std;
 
int main(){
  int input[100], jumlah, i, max;
 
  cout << "Input jumlah element Array: ";
  cin >> jumlah;
 
  for(i = 0; i < jumlah; i++){
    cin >> input[i];
  }
 
  cout << endl;
  max = input[0];
  for(i = 0; i < jumlah; i++){
    if(input[i] > max){
      max = input[i];
    }
  }
  cout  << "Angka terbesar adalah: " << max;
 
  return 0;
}
