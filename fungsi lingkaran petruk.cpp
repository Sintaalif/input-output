#include <iostream>
using namespace std;

double circle(int r);
int main(){
	int r;
	cin >> r;
	cout <<  circle(r) ;
}
double circle(int r){
	return 3.14 *r *r;
}
