#include <iostream>
using namespace std;

double fib(int);
int main(){
	int i=0;
	while (i<=10){
		cin >> i;
		cout << fib(i);
		i++;
	}

}
double fib(int n){
	if (n ==0){
		return 0;
	}else if (n==1){
		return 1;
	}else{
		return fib(n-1)+ fib(n-2);
	}
	
}
