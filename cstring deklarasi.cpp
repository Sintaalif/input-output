#include <iostream>
using namespace std;

int main(){
	char name1 [8] = "john";
	char name2 [] ="john";
	
	cout << name1 << endl;
	cout << name2 << endl;
	
	cout << sizeof(name1) << endl;
	cout << sizeof(name2) << endl;
	
}
