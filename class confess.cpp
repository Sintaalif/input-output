#include <iostream>
using namespace std;

class CnA{
	string statement, answer;
//	string answer;
	public:
	void setStatement(string statement){
		this->statement=statement;
	}
	string getStatement(){
		return this->statement;
	}
	void setAnswer(string answer){
		this->answer=answer;
	}
	string getAnswer(){
		this ->answer.insert(answer.end(),' ');
		statement.insert(4, answer);
		return statement;
	}
};

int main(){
	CnA d1;
	string statement;
	string answer;
	
	getline(cin,statement);
	getline(cin,answer);
	
	d1.setStatement(statement);
	d1.setAnswer(answer);
	cout<<d1.getStatement()<<endl;
	cout<<d1.getAnswer();
	return 0;
}
