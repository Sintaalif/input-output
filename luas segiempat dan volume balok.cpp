#include <iostream>
using namespace std;

double cube(double,double);
double cube(double,double,double);
int main(){
	double s,n,p,l,t;
	cin >> s;
	cin >> s;
	cout << "luas segiempat : " << cube(s,n) << endl;
	cin >> p;
	cin >> l;
	cin >> t;
	cout << "volume balok : " << cube(p,l,t) << endl;
}
double cube(double s, double n){
	return s * n;
}
double cube(double p, double l, double t){
return p * l * t;
}
