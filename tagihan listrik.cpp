#include <iostream>
using namespace std;


//procedure
void input(){
	char no[15],nama[20];
	int daya_alat,lama_pemakaian;
           	    cout<<"\n\t\t   ==============================================================================";
                cout<<"\n\t\t                    >>  PROGRAM TAGIHAN LISTRIK   << ";
                cout<<"\n\t\t                                                ";                            
                cout<<"\n\t\t   ==============================================================================";
                cout <<endl;
                
                
cout<<"Masukkan No. Rekening               : ";
cin>>no;
cout<<"Masukkan Nama Pelanggan             : ";
cin>>nama; 
cout<<"Masukkan daya alat (Watt)           : ";
cin>>daya_alat; {}
cout<<"Masukkan lama pemakaian (jam)       : ";
cin>>lama_pemakaian; 
 cout <<endl;
}

//function
int kembalian(int x, int d){
 int kembali = x - d;
 return kembali;
} 

int main() {
int x,d,hasil,daya_alat,lama_pemakaian;
long tarif;
char yesNo,nama[20];

//looping
do{
system("CLS");
input();
hasil = (daya_alat * lama_pemakaian)/ 1000 ; 
cout<<"Jumlah pemakaiannya adalah "<<hasil<<" kwh \n"; 

 //selection 
 if (daya_alat  == 900 ){
 	tarif = hasil * 1352  ;
 }else if (daya_alat > 900 ){
	tarif = hasil * 1467 ;
}
 

cout<<"Tagihan listrik atas pelanggan yang bernama "<<nama<<" adalah "<<tarif<<endl;
cout <<"masukan kembali jumlah tagihan listrik :";
cin >>d; 
cout <<endl;
cout <<"silakan membayar tagihan listrik :";
cin >> x;

while (x<=d){
cout <<" uang Anda Kurang, Silahkan Bayar Lagi:";cin>>x;
}

 cout <<"uang kembalian :"<<kembalian(x,d)<<endl;

 cout << endl;
 cout<<"Apakah Anda ingin membayar lagi? (Y/N)?";
 cin>>yesNo;
 }while (yesNo == 'Y' || yesNo == 'y');
 system("CLS");
 
 cout<<"\n\t\t   ==============================================================================";
 cout<<"\n\t\t     >> TERIMA KASIH TELAH MEMBAYAR TAGIHAN LISTRIK <<";
 cout<<"\n\t\t   ==============================================================================";
}
