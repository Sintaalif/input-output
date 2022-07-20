#include <iostream>
using namespace std;

int main() {
  int maksimum, jumlah, i = 1;
  int bil[100];
  cin >> jumlah;
  
  for (i = 0; i < jumlah; i ++) {
    cin >> bil[i];
  }
  
  maksimum = bil[0];
  for(i = 0; i < jumlah; i++) {
    if (bil[i] > maksimum)  {
      maksimum = bil[i];
    }
  }
  cout << "Nilai maksimum : " << maksimum <<endl;
}
