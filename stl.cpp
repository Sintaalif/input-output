#include <iostream>
#include <stack>
#include <queue>
#include <list>
using namespace std;

int main(){
//	stack <int> instack;
//	instack.push(1);
//	instack.push(3);
//	instack.push(2);
//	instack.push(7);
//	instack.push(6);
//	
//	while (instack.size() >0){
//	
//	instack.pop();
//	cout <<instack.top()<<endl;
//}

//	queue <int> mydata;
//	mydata.push(1);
//	mydata.push(3);
//	mydata.push(2);
//	mydata.push(7);
//	mydata.push(6);
//	
//	while (!mydata.empty()){
//	mydata.pop();
//	cout <<mydata.top()<<endl;
//}

	vector <int> mydata;
	mydata.push_back(1);
	mydata.push(3);
	mydata.push(2);
	mydata.push(7);
	mydata.push(6);
	
	while (!mydata.empty()){
	mydata.pop();
	cout <<mydata.top()<<endl;
}



	
	return 0;
}
