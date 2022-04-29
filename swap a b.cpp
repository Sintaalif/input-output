no. 23

#include <iostream>
using namespace std;

//void swap(int,int);

int main(){
	int a, b;
	cout <<"masukan nilai a dan b : ";
	cin >> a >> b;
	swap(a,b);
	cout <<"swap a dan b = ";
	cout << a <<" " << b;
}

inline void swap(int * x, int * y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}
