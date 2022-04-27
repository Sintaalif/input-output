#include <iostream>
using namespace std;

int fib(int);
int main(){
	int i=0;
		cin >> i;
		cout << fib(i);

}
int fib(int n){
	if (n ==0){
		return 0;
	}else if (n==1){
		return 1;
	}else{
		return fib(n-2)+ fib(n-1);
	}
	
}
