#include <iostream> 
#include <cstdlib>
using namespace std;

//array
char no[15],nama[20],yesNo; 
int hasil,bulanlalu,bulansekarang,x,d,kembali; 
long a,b1,b2,b3; 
float b,c; 

//procedure
void input(){
	 	        cout<<"\n\t\t   ==============================================================================";
                cout<<"\n\t\t                    >>  PROGRAM TAGIHAN LISTRIK   << ";
                cout<<"\n\t\t                          												          ";                            
                cout<<"\n\t\t   ==============================================================================";
                cout <<endl;
                
cout<<"masukan No. Rekening                    : ";
cin>>no; 
cout<<"masukan Nama Pelanggan                  : ";
cin>>nama; 
cout<<"Input penunjuk meter bulan sebelumnya : ";
cin>>bulanlalu; 
cout<<"Input penunjuk meter bulan sekarang   : ";
cin>>bulansekarang; 
 
}

//function
int kembalian(int x, int d){
	kembali = x - d;
	return kembali;
} 

int main() {
int x,d;

//looping
do{
system("CLS");
input();
hasil = bulansekarang - bulanlalu; 
cout<<"Jumlah pemakaiannya adalah "<<hasil<<" kwh \n"; 

 //selection 
if (hasil >= 20) { 
hasil -= 20; 
b1 = 20 * 500; 
}else (b1 = hasil * 500); 
a = b1 + b2 + b3; 
b = 0.1 * a; 
c = 30000 + a + b;
if (hasil >= 40) { 
hasil -= 40; 
b2 = 40 * 800; 
b3 = hasil * 1000; 
}else (b2 = hasil * 800); 

cout<<"Tagihan listrik atas pelanggan yang bernama "<<nama<<" adalah "<<c<<endl;
cout <<"masukan kembali jumlah tagihan listrik :";
cin >>d; 
cout <<"silakan membayar tagihan listrik :";
cin >> x;
while (x<=d){cout <<" uang Anda Kurang, Silahkan Bayar Lagi:";cin>>x;
}
cout <<"uang kembalian :"<<kembalian(x,d)<<endl;


cout<<"Apakah Anda ingin memesan lagi? (Y/N)?";
	cin>>yesNo;
	}while (yesNo == 'Y' || yesNo == 'y');
	system("CLS");
	
	cout<<"\n\t\t   ==============================================================================";
	cout<<"\n\t\t  	  >> TERIMA KASIH TELAH MEMBAYAR TAGIHAN LISTRIK <<";
	cout<<"\n\t\t   ==============================================================================";
}

