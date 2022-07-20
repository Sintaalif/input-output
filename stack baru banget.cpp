#include <iostream>
#include <windows.h>
using namespace std;

struct Stack{		//	struktur stack
	string sampah[10];
	int upper;
}sph;

void display(){
		system("Color F2");
        cout<<"================================================="<<endl;
        cout<<"============ Program Tumpukan Sampah ============"<<endl;
        cout<<" 1. Push (Masukan sampah)"<<endl;
        cout<<" 2. Pop (Mengambil sampah)"<<endl;
        cout<<" 3. Melihat sampah"<<endl;
        cout<<" 4. Membersihkan sampah"<<endl;
        cout<<"================================================="<<endl;
}

void push(string smph){		//fungsi untuk memasukan data stack
	sph.upper++;
	sph.sampah[sph.upper] = smph;
}

void pop(){					//fungsi untuk menghapus data dari paling atas
	sph.upper = sph.upper - 1;
}

int IsEmpty(){		//fungsi untuk mengecek apakah stack kosong atau tidak
	if (sph.upper == -1){
		return true;
	}else{
		return false;
	}
}

int IsFull(){		//fungsi utuk mengecek apakah stack penuh atau kosong
	if (sph.upper == 10 - 1){
		return true;
	}else {
		return false;
	}
}

int main(){
	int pilih;
	string input;
	sph.upper = -1;			//inisialisasi awal, untuk menentukan nilai awal
	
	do{
		display();
		system("Color FD");
		cout <<"Masukan Pilihan (1-4) : ";
		cin >> pilih;
		
		switch (pilih){
			case 1:
				if(IsFull() == 1){
					cout <<">>>>>Tumpukan Sampah Sudah Penuh<<<<<";
				}else {
					cout <<"Masukan Sampah :";
					cin >> input;
					push(input);
					system ("CLS");
				}
				cout <<endl;
				break;
				
			case 2:
				if (IsEmpty() == 1){		//kondisi jika data masih kosong
					cout <<">>>>>Tumpukan Sampah Sudah Kosong<<<<<<" ;
				}else{
					cout <<"Data tumpukan sampah ["<<sph.sampah[sph.upper] <<"] telah di buang" <<endl;
					pop();
				}
				cout <<endl;
				break;
			
			case 3:
				if(IsEmpty() == 1){
					cout <<">>>>>Tumpukan Sampah Sudah Kosong<<<<<<" ;
				}else {
					cout <<"Data Tumpukan Sampah : " <<endl;
					for (int i=sph.upper; i >=0; i--){		//untuk menampilkan isi data
						cout <<" [" <<sph.sampah [i]<<"] "<<endl;
					}
				}
				break;
			
			case 4:
				sph.upper = -1;			//menghapus semua data
				cout <<">>>>>Tumpukan Sampah Sudah Kosong<<<<<<" <<endl;
				break;
				cout <<endl;
			
			cout <<endl;
			default:
				cout <<"[" <<pilih << "] Tidak Ada Dalam Pilihan Stack !";
		}
	}while (pilih =1,2,3,4);
}
