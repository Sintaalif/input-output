#include <iostream>
#include <stack> //stl

using namespace std;

int main(){
	stack <string> tumpukan;
	int pilih;
	string input;
	
	do{
        cout<<"\t\t\t\t=================================================\n";
        cout<<"\t\t\t\t======== PROGRAM TUMPUKAN BAJU di LEMARI ========\n";
        cout<<"\t\t\t\t 1. Masukan Baju di Lemari\n";
        cout<<"\t\t\t\t 2. Mengambil Baju dari Tumpukan di Lemari\n";
        cout<<"\t\t\t\t 3. Melihat Tumpukan Baju di Lemari" <<endl;
        cout<<"\t\t\t\t 4. Hapus" <<endl;
        cout<<"\t\t\t\t 5. Melihat Jumlah Tumpukan Baju di dalam Lemari\n";
        cout<<"\t\t\t\t 6. Keluar Program\n";
        cout<<"\t\t\t\t=================================================\n\n\n\n";	
        
        cout <<"\t\t\t\t Masukan Pilihan (1-6) : ";
		cin >> pilih;
		
			switch (pilih){			//percabangan switch case
			case 1:
				cout<<"\t\t\t\t=================================================\n";
					cout <<"\t\t\t\t Masukan Baju :";
					cin >> input;
					tumpukan.push(input);
					system ("CLS");

				cout <<"\n\n\n";
				break;
			case 2:
				if (tumpukan.empty()){		//kondisi jika data masih kosong
					cout<<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout <<"\t\t\t\t>>>>>Tumpukan Baju di Lemari Sudah Kosong gan<<<<<<\n" ;
					cout<<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
				}else{
					cout<<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout <<"\t\t\t\tTumpukan Baju "<<tumpukan.top() <<" telah di ambil\n";
					tumpukan.pop();
					cout<<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
				}
				cout <<"\n\n\n";
				break;
			
			case 3:
				if(tumpukan.empty()){			//kondisi jika data masih kosong
					cout<<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					cout <<"\t\t\t\t>>>>>Tumpukan Baju dilemari Sudah Kosong gan<<<<<<\n" ;
					cout<<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
				}else {
						cout <<"\t\t\t\tTumpukan baju didalam lemari : \n";
						while (!tumpukan.empty()){
						cout<<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
						cout <<"\t\t\t\t ["<<tumpukan.top() <<"] \n";
						tumpukan.pop();
					}
				}
				cout <<"\n\n\n";
				break;
			case 4:
				system("CLS");
				break;
				
			case 5:
				cout<<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
				cout <<"\t\t\t\t Jumlah Tumpukan Baju di Lemari ada  " <<tumpukan.size() <<" baju gan\n";
				cout<<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n";
				break;
				
			case 6:
				system("CLS");
				cout<<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
				cout <<"\t\t 				Program Selesai Gan\n";
				cout<<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
				exit(0);
				break;
					
			default:
				cout<<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
				cout <<"\t\t\t\t Pilihan tidak ada gan, coba baca lagi pilihannya gan\n";
				cout<<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";

		}
	}while (pilih >=1 && pilih <=6);
	
	return 0;
	
}
