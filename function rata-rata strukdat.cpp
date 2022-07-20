#include <iostream>
using namespace std;

int  hitungjumlah(int a,int b);
float hitungrata(int jml);
 
main(){
   int x,y,jml;
   float rata;
   
	cin >> x;
	cin >> y;
	jml =hitungjumlah(x,y);
	rata=hitungrata(jml);
	cout << jml << endl;
	cout << rata << endl;
}
 
int hitungjumlah(int a,int b){
                return a+b;
}
 
float hitungrata(int jml){
                return jml/2;
}
