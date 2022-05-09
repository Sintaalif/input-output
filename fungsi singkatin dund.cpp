#include <iostream>
#include <string>
using namespace std;

void singkatinDund(string str1){
	int j=0,str3=str1.size()-1, i=str3-1;
	string str2=str1.substr(1,i);
	
	cout<<str1.at(j);
	cout<<str2.size();
	cout<<str1.at(str3);
}

int main(){
   string str1; 
   
	getline (cin, str1) ;
	singkatinDund(str1);
}
