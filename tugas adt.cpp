#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

/*KELOMPOK 8
Ahmad Irvandi
Siti Hafijah Zahra Siregar
S.A Syailendra Wangsa Suharyo
*/

class JAM{
	private:
		int Hour;
		int Minute;
		int Second;
		int Num;
		
	public:
		JAM(){
			this->Hour=0;
			this->Minute=0;
			this->Second=0;
			this->Num=0;
			cout<<getHour()<<":";
			cout<<getMinute()<<":";
			cout<<getSecond()<<":";
		}
		void setHour(int Hour){
			this->Hour=Hour;
		}
		void setMinute(int Minute){
			this->Minute=Minute;
		}
		void setSecond(int Second){
			this->Second=Second;
		}
		int getHour(){
			return Hour;
		}
		int getMinute(){
			return Minute;
		}int getSecond(){
			return Second;
		}
	
		void print(){
		int a=0;
		while(a==0) {
        system("cls");
        cout<<Hour<<":"<<Minute<<":"<<Second<<endl;
        Sleep(500);
        Second--;
        if(Second<0)
        {
            Second=59;
            Minute--;
        }
        if(Minute<0)
        {
            Minute=59;
            Hour--;
        }
        if(Hour<0)
        {
            a++;
        }
    	}
		}
		
};

void cover(){
	 cout<<" =====================PEMINJAMAN BUKU======================= "<<endl;
	 cout<<" ==================SILAHKAN PILIH BUKU====================== "<<endl;
	 cout<<endl;
	 cout<<" =========================================================== "<<endl;
	 cout<<" |                          Denda                          | "<<endl;
	 cout<<" =========================================================== "<<endl;
     cout<<" |                                                         | "<<endl;
   	 cout<<" |                       Rp.500/menit                      | "<<endl;
	 cout<<" |   		                                               | "<<endl;
	 cout<<" =========================================================== "<<endl;
	 }
	  
	 int main(){
	 	cover();
	 	JAM jam;
		int ubahJam;
		int ubahMinute;
		char judul [50];
	 	
	    cout<<"\nMasukkan Judul Komik : ";
	    cin>>judul;
	    cout<<"\n";
	    while(true){
    	cout<<"\nSelamat datang di Peminjaman Buku\n";
		jam.print();
		cout<<"\nMasukan durasi penyewaan\n";
        cout<<"set jam : ";
        cin>>ubahJam;
        cout<<"set menit : ";
        cin>>ubahMinute;
        if(ubahJam<24&&ubahMinute<60)
        break;
        else
        system("cls");
    }
    jam.setHour(ubahJam);
    jam.setMinute(ubahMinute);
	jam.print();
	cout<<"Buku Yang Anda Pinjam Adalah :"<<judul<<endl;
	if(ubahJam <= 0 && ubahMinute <= 1){
		cout<<"Denda = Rp500";
	}else if(ubahJam <= 1 && ubahMinute <= 2){
		cout<<"Denda = Rp1000";
	}else if(ubahJam > 2 && ubahMinute >= 3){
		cout<<"Denda = Rp1500";
	}
	    
	   return 0;
}
	 
