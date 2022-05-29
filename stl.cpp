#include <iostream>
#include <queue>

using namespace std;

void isi(queue <int>antrian){
	while(!antrian.empty()){
		cout <<antrian.front()<<endl;
		antrian.pop();
	}
}

int main(){
	queue <int> antrian;
	
	antrian.push(10);
	antrian.push(11);
	antrian.push(15);
	
	cout <<"Ukuran queue : " <<antrian.size() <<endl;
	cout <<"tampilkan queue : "<<endl;
	isi(antrian);
	
	cout <<endl;
	antrian.pop();
	cout <<"Ukuran queue : " <<antrian.size() <<endl;
	cout <<"tampilkan queue setelah di pop : "<<endl;
	isi(antrian);	
	
	
	
	return 0;
	
}
