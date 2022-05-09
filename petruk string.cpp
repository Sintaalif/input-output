#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	s = "hello world";
	cout << s <<endl;
	
	string str1 ="you are welcome";
	cout << str1 <<endl;
	
	string str2 (6, 'B');
	cout << str2 <<endl;
	
	string str3 (s);
	cout << str3 <<endl;
	
	string str4 (str1, 0, 3);
	cout <<str4 <<endl;
	
	string str5 (str1.begin() + 4, str1.end());
	cout <<str5 <<endl;
	
	string str6 ("you are welcame", 8);
	cout <<str6 <<endl;
	
	string a = "hello";
	string b = "world";
	a.append(b);
	cout << a << endl;
	
	string c = "hello world";
	cout << c.at(0) <<endl;
	cout << c[0] <<endl;
	
	string d = "hello world";
	d.clear();
	cout << d << endl;
	
	string e = "hello";
	string f = "world";
	cout << a.compare(f) <<endl;
	string g ="aaa";
	string h ="aaa";
	cout << g.compare(h) <<endl;
	if(g.compare(h) == 0){
		cout <<"sama"<<endl;
	}else{
		cout <<"beda"<<endl;
	}
	
	string i,j;
	i ="hello world";
	cout << i << endl << j <<endl;
	cout <<i.empty() << endl;
	cout <<j.empty() << endl;
	
	string k =" hello world";
	k.erase(4,2);
	cout << k <<endl;
	k.erase(k.begin() + 2, k.begin()+4);
	cout << k <<endl;
	
	string l ="hello world";
	cout <<l.find("o") <<endl;
	cout <<l.find("x") <<endl;
	
	cout <<l.length() <<endl;
	cout <<l.size() <<endl;
	
	cout << l.substr(4) <<endl;
	cout << l.substr(4, 3) <<endl;
	
	string arr[3] = {"ucup","otong","dudung"};
	string copy[3];
	for(int i=0; i<3;i++){
		cout <<arr[i] <<endl;
		copy[i].assign(arr[i]);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

