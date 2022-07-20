#include <iostream>		//untuk cin dan cout
#include <windows.h>
#include "stack.h"	//untuk fungsi color
using namespace std;
//program yang saya buat ini tentang tumpukan sampah

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
