#include <iostream>
using namespace std;
int jumlahdigit(int n){
	if(n==0){
		return 1;
	}else{
		return (n - (n%10))/10;
	
	}
}
int main(){
	jumlahdigit(123);
}
