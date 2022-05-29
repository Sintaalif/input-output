#include <iostream>
#include <stack>

using namespace std;

void isi(stack <int> tumpukan){
	while (!tumpukan.empty()){
		cout <<"["<<tumpukan.top() <<"]"<<endl;
		tumpukan.pop();
	}
}

int main(){
	stack <int> tumpukan;
		
		cout <<"Masukan stack : "<<endl;
		for(int i=0; i<5; i++){
		int angka;
    	cin >> angka;      
      	tumpukan.push(angka);
		}
	
	cout <<endl;
	cout <<"Ukuran stack = " <<tumpukan.size() <<endl;	
	cout <<"Tampilkan stack : " <<endl;
	isi(tumpukan);


	cout <<endl;
	tumpukan.pop();
	tumpukan.pop();
	tumpukan.pop();
	cout <<"Ukuran stack = " <<tumpukan.size() <<endl;
	cout <<"Tampilkan stack setelah di pop : "<<endl;
	isi(tumpukan);
	
//	tumpukan.pop();
//	tumpukan.pop();
//	if(tumpukan.empty()){
//		cout <<"Tumpukan kosong";
//	}else{
//		cout <<"tumpukan tidak kosong";
//		while (!tumpukan.empty()){
//		cout <<"["<<tumpukan.top() <<"]"<<endl;
//		tumpukan.pop();
//	}
//	}
	return 0;
}

