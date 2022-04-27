#include <iostream>
using namespace std;

//void jarak(int x1, int x2, int y1, int y2, int z1, int z2){
//	int d = (x2 -x1,2) + (y2 -y1, 2) + (z2 -z1, 2) * 0.5;
//	cout << "jarak = " << d;
//}
int main(){
	int x1 =5, y1=6, z1=8, x2=10, y2=12, z2=30;
//	int y1 =6;
//	int z1 =8;
//	int x2 =10;
//	int y2 =12;
//	int z2 =30;
	int d = (x2 -x1,2) + (y2 -y1, 2) + (z2 -z1, 2) * 0.5;
	cout << "jarak = " << d;
//	jarak(x1,x2,y1,y2,z1,z2);
	return 0;
}

