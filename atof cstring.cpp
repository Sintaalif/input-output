#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;
char *balik(char *str){
	char hasil[25];
	int i,jumlahstr,jumlah=0;
	
	while (str[jumlah]!='\0'){
		jumlah++;
	}
	jumlahstr=jumlah-1;
	
	for (i=0;i<jumlah;i++){
		hasil[i]=str[jumlahstr];
		jumlahstr--;
	}
	hasil[i]='\0';
	cout<<hasil;
	
return 0;
}
int main(){

cout << distance(x1,x2,y1,y2,h);	
	
}
