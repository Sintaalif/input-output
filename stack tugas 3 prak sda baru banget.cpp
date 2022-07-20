#include <iostream>		//untuk cin dan cout
#include <windows.h>		//untuk fungsi color
using namespace std;
//program yang saya buat ini tentang tumpukan sampah
struct Stack{		//	struktur stack
	string sampah[10];		//deklarsai variabel
	int upper;
}sph;

void display(){				//fungsi display untuk menampilkan menu pilihan
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

int blank(){		//fungsi untuk mengecek apakah stack kosong atau tidak
	if (sph.upper == -1){
		return true;
	}else{
		return false;
	}
}

int Full(){		//fungsi untuk mengecek apakah stack penuh atau kosong
	if (sph.upper == 10 - 1){
		return true;
	}else {
		return false;
	}
}

int main(){
	int pilih;				//deklarasi variabel
	string input;
	sph.upper = -1;			//inisialisasi awal, untuk menentukan nilai awal
	
	do{						//perulangan do while
		display();
		system("Color FD");			//fungsi color untuk teks
		cout <<"Masukan Pilihan (1-4) : ";
		cin >> pilih;
		
		switch (pilih){			//percabangan switch case
			case 1:
				if(Full() == 1){
					cout <<">>>>>Tumpukan Sampah Sudah Penuh<<<<<";
				}else {
					cout <<"Masukan Sampah :";
					cin >> input;
					push(input);
					system ("CLS");			//untuk membersihkan layar
				}
				cout <<endl;
				break;
				
			case 2:
				if (blank() == 1){		//kondisi jika data masih kosong
					cout <<">>>>>Tumpukan Sampah Sudah Kosong<<<<<<" ;
				}else{
					cout <<"Data tumpukan sampah ["<<sph.sampah[sph.upper] <<"] telah di buang" <<endl;
					pop();
				}
				cout <<endl;
				break;
			
			case 3:
				if(blank() == 1){			//kondisi jika data masih kosong
					cout <<">>>>>Tumpukan Sampah Sudah Kosong<<<<<<" ;
				}else {
					cout <<"Data Tumpukan Sampah : " <<endl;
					for (int i=sph.upper; i >=0; i--){		//untuk menampilkan isi data
						cout <<" [" <<sph.sampah [i]<<"] "<<endl;
					}
				}
				break;
			
			case 4:
				sph.upper = -1;			//untuk menghapus semua data
				cout <<">>>>>Tumpukan Sampah Sudah Kosong<<<<<<" <<endl;
				break;
				cout <<endl;
			
			cout <<endl;
			default:
				cout <<"[" <<pilih << "] Tidak Ada Dalam Pilihan Stack !";
		}
	}while (pilih =1,2,3,4);
}
