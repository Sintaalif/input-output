#include <iostream>

using namespace std;
int main(){
	
/*SINTA NURHALIFAH
2117051015
B*/
       
        int gaji_karyawan,gaji_umr;
        
        cout<<"MASUKAN GAJI KARYAWAN   : ";cin>>gaji_karyawan;
    	cout<<"MASUKAN GAJI UMR DAERAH : ";cin>>gaji_umr;
    	
        if(gaji_karyawan < gaji_umr){
            cout<<"--------------------------------"<<endl;
            cout<<"GAJI ANDA DIBAWAH UMR"<<endl;
         }
         
		else if(gaji_karyawan > gaji_umr){
            cout<<"--------------------------------"<<endl;
            cout<<"GAJI ANDA DIATAS UMR"<<endl;
         }
         
	    else if(gaji_karyawan = gaji_umr){
		    cout<<"--------------------------------"<<endl;
            cout<<"GAJI ANDA SETARA DENGAN UMR"<<endl; 
         }
         
       return 0;    
     }
