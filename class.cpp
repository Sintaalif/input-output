#include <iostream>
using namespace std;


class Data{
	//member data
	private:
	int a;
	int b;
	
	//member function
	public:
		//constructor
		data(){
			this ->a =0;
			this ->b =0;
		}
		
		data(int a, int b){
			this ->a = a;
			this ->b = b;
		}
		void set_a(int x){
			a = x;
		}
		
		int get_a(){
			return a;
		}
		void set_b(int y){
			b = x;
		}
		
		int get_b(){
			return b;
		}
};

int main(){
	Data data1;
	Data data2();
	
//	data1.set_a(1);
//	cout << data1.get_a() <<endl;
//	
	data2.set_a(1);
	data2.set_b(2);
	cout << data2.get_a() <<endl;
	cout << data2.get_b() <<endl;
	return 0;
}
