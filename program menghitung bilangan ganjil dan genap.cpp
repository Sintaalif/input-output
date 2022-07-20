#include <iostream>
using namespace std;
 
int main(){
int bil,bts,jum_genap=0,jum_ganjil=0;
cout <<"masukan batas :";
cin >> bts;

for(int i=0;i<bts;i++){
cout<<"masukkan bilangan : ";
cin>>bil;

if(bil%2==0){
    jum_genap=jum_genap+bil;
    }
  else{
    jum_ganjil=jum_ganjil+bil;
    }
}
 
cout<<"jumlah bilangan genap :  "<<jum_genap<<endl;
cout <<"jumlah bilangan ganjil : "<<jum_ganjil<<endl;

}

