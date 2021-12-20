#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	
    float total,angka,rata_rata;
    int jumlah;
    
    cout << ""; cin >> angka;
    cout << endl;

    for (int x = 1; x <= angka; x++) {
        cout << ""; cin >> angka;
        total = total + jumlah;
    }
    
    cout << endl;
    cout << " Rata-rata     : " << rata_rata;
    cout<<endl;
    cout << " Total   : " << total << endl;
    rata_rata = total / jumlah;
    
    getch();
}
