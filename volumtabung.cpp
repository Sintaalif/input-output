#include <iostream>
using namespace std;

int main(){
	int r, t, hasil;
	cout << "masukan jari-jari : ";
	cin >>r;
	cout << "masukan tinggi : ";
	cin >> t;
	
	hasil = 3.14 * r * r * t;
	cout <<"hasil volume tabung : " << hasil << endl;
	return 0;
}
