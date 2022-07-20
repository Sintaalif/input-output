#include <iostream>
using namespace std;
int main() {
	
	int terkecil, terbesar, bil1, bil2, bil3;
	cout<<"\nMasukan Bilangan ke-1 : ";
	cin>>bil1;
	cout<<"Masukan Bilangan ke-2 : ";
	cin>>bil2;
	cout<<"Masukan Bilangan ke-3 : ";
	cin>>bil3;
	

	terkecil=bil1;
	
	if (bil2 < terkecil){
		terkecil=bil2;
	}
	if (bil3 < terkecil){
		terkecil=bil3;
	}

	
	cout<<"\nNilai Terkecil adalah "<<terkecil<<endl;

	return 0;	
}
