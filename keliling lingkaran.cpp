#include <iostream>
using namespace std;

int main(){
	float r;
	int keliling_lingkaran, luas_lingkaran;
	cout << "masukan jari-jari : ";
	cin >> r;
	
	keliling_lingkaran = 2 * 3.14 * r;
	luas_lingkaran = 3.14 * r * r;
	cout <<"keliling lingkaran = " << keliling_lingkaran << endl;
	cout <<"luas lingkaran = " << luas_lingkaran;
	return 0;
}
