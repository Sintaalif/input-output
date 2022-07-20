#include <iostream>
using namespace std;

//matriks 2x2
int main() {
  int matriks1[10][10], matriks2[10][10], hasil[10][10];
  int i, j, col, row, jumlah = 0;

    cout << "Masukkan elemen matriks pertama: \n";
    for(i = 0; i < 2; i++){
      for(j = 0; j < 2; j++){
        cin >> matriks1[i][j];
      }
    }
    
    cout << "Masukkan elemen matriks kedua: \n";
    for(i = 0; i < 2; i++){
      for(j = 0; j < 2; j++){
        cin >> matriks2[i][j];
      }
    }
    
    for(i = 0; i < 2; i++){
      for(j = 0; j < 2; j++){
          jumlah = jumlah + matriks1[i][j] + matriks2[i][j];
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
	}
	
    cout << "Hasil penjumlahan matriks: \n";
    for(i = 0; i < 2; i++){
      for(j = 0; j < 2; j++){
        cout << hasil[i][j] << " ";
      }
      cout << endl;
    }
    return 0;
  }
  

