#include <iostream>
#include <stack>

using namespace std;

void isi(stack <int> tumpukan){
	while(!tumpukan.empty()){
		cout <<tumpukan.top() <<endl;
		tumpukan.pop();
	}
}

int main(){
	stack <int> tumpukan;
	
	tumpukan.push(12);
	tumpukan.push(10);
	tumpukan.push(5);
	
	cout <<"Ukuran stack : " <<tumpukan.size() <<endl;
	cout <<"Tampilkan Stack : " <<endl;
	isi(tumpukan);
	
	tumpukan.pop();
	cout <<"ukuran stack : " <<tumpukan.size() <<endl;
	cout <<"Tampilkan stack setelah di pop : " <<endl;
	isi(tumpukan);	
	return 0;
}
