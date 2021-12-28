
include <iostream>
#include <conio.h>
using namespace std;
int main(){
	
/*SINTA NURHALIFAH
2117051015
B*/
     
        double btc,shrimp,crab,octopus,fish,dolphin,shark,whale,humpback;
        
        cout<<"MASUKAN JUMLAH BITCOIN : ";cin>>btc;
    	
    	
        if(btc <1){
            cout<<"----------------1----------------"<<endl;
            cout<<"Tipe Ranking : Shrimp"<<endl;
         }
         
		else if(btc >=  && btc <10){
            cout<<"--------------------------------"<<endl;
            cout<<"Tipe Ranking : Crab"<<endl;
         }
         
	    else if(btc >=10 && btc <50){
		    cout<<"--------------------------------"<<endl;
            cout<<"Tipe Rangking : Octopus"<<endl; 
         }
         
          else if( btc >=50 && btc < 100){
		    cout<<"--------------------------------"<<endl;
            cout<<"Tipe Rangking : Fish"<<endl; 
         }
          
          else if(btc >=100 && btc <500){
		    cout<<"--------------------------------"<<endl;
            cout<<"Tipe Rangking : Dolphin"<<endl; 
         }
         
          else if(btc >=500 && btc <1000){
		    cout<<"--------------------------------"<<endl;
            cout<<"Tipe Rangking : Shark"<<endl; 
         }
         
          else if(btc >=1000 && btc < 5000){
		    cout<<"--------------------------------"<<endl;
            cout<<"Tipe Rangking : Whale"<<endl; 
         }
         
          else if(btc >=5000){
		    cout<<"--------------------------------"<<endl;
            cout<<"Tipe Rangking : Humpback"<<endl; 
         }
         
         getch();
         
       return 0;    
     }
