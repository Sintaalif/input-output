#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string kalimat;
	getline(cin,kalimat);
	reverse(kalimat.begin(),kalimat.end());
	kalimat.insert(kalimat.end(),' ');
	int k=0,i,jml=kalimat.size();

	for(i=0;i<=jml;i++){
		if(kalimat[i]==' '){
			reverse(kalimat.begin()+k,kalimat.begin()+i);
			k=i+1;
		}
	}
	kalimat.pop_back();	
	cout<<kalimat;
	return 0;
}
