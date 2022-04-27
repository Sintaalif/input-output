no. 11

#include <iostream>
using namespace std; 

double integral(double x, double a, double b){
	int n = 100; 
	double h, F, Sum ;
	h = (b-a)/n;
 	Sum = h *( b*b*b + a*a*a)/2;
 	for ( int i=1; i<n ; i++){
	 	x = a + i*h;
 		F = x*x*x;
 		Sum = Sum+ h *F ;
	}
 		return Sum ;
}

int main (){
	double y; 
	cout << "Integral = " << integral(y, 5.0, 10.0) <<endl; 
	
	return 0; 	
}
