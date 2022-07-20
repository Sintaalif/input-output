#include <iostream>
using namespace std;

int main(){
  int bil[100], i, n;
  int rata, jumlah=0;

  cin >> n;
  for(i=0; i<n; i++){
 
    cin >> bil[i];
    jumlah = jumlah + bil[i];
  }
  rata = jumlah / n;
  cout << jumlah << endl;
  cout <<rata << endl;
  return 0;
}
