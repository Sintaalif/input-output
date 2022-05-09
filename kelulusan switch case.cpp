#include <iostream>
using namespace std;

main() {
	char nilai_mutu;
	cin >> nilai_mutu;
    switch(nilai_mutu){
        case 'A' : cout << "LULUS" << endl; break;
        case 'B+' : cout << "LULUS" << endl; break;
        case 'B' : cout << "LULUS" << endl; break;
        case 'C+' : cout << "LULUS" << endl; break;
        case 'C' : cout << "LULUS" << endl; break;
        case 'D' : cout << "LULUS" << endl; break;
        case 'E' : cout << "TIDAK LULUS"  << endl; break;
        default  : cout << "nilai mutu yang dimasukan tidak sesuai !"<< endl; break;
    }

}
