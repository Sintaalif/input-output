#include <iostream>
using namespace std;
 int main(){
 	int bilangan;
 	
 	cin >> bilangan;
 	if(bilangan < 10){
 		cout <<"bilangan satuan";
	 }else if (bilangan < 100){
	 	cout <<"bilangan puluhan";
	 }else if (bilangan < 1000){
	 	cout <<"bilangan ratusan";
	 }else{
	 	cout <<"bukan bilangan satuan puluhan ratusan";
	 }
 }
