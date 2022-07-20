#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack <string> tumpukan;
	int pilih;
	string input;
	
	do{
        cout<<"================================================="<<endl;
        cout<<"======== PROGRAM TUMPUKAN BAJU di LEMARI ========"<<endl;
        cout<<" 1. Masukan Baju di Lemari" <<endl;
        cout<<" 2. Mengambil Baju dari Tumpukan di Lemari" <<endl;
        cout<<" 3. Melihat Tumpukan Baju di Lemari" <<endl;
        cout<<" 4. Hapus" <<endl;
        cout<<" 5. Melihat Jumlah Tumpukan Baju di dalam Lemaris"<<endl;
        cout<<"================================================="<<endl;	
        
        cout <<"Masukan Pilihan (1-5) : ";
		cin >> pilih;
		
			switch (pilih){			//percabangan switch case
			case 1:
				cout<<"================================================="<<endl;
					cout <<"Masukan Baju :"<<endl;
					cin >> input;
					tumpukan.push(input);
					system ("CLS");

				cout <<endl;
				break;
			case 2:
				if (tumpukan.empty()){		//kondisi jika data masih kosong
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					cout <<">>>>>Tumpukan Baju di Lemari Sudah Kosong gan<<<<<<" ;
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				}else{
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					cout <<"Tumpukan Baju ["<<tumpukan.top() <<"] telah di ambil" <<endl;
					tumpukan.pop();
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				}
				cout <<endl;
				break;
			
			case 3:
				if(tumpukan.empty()){			//kondisi jika data masih kosong
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					cout <<">>>>>Tumpukan Baju dilemari Sudah Kosong gan<<<<<<" ;
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				}else {
						while (!tumpukan.empty()){
						cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
						cout <<"Tumpukan baju didalam lemari :"<<endl;
						cout <<"["<<tumpukan.top() <<"]"<<endl;
						tumpukan.pop();
						cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					}
				}
				break;
			case 4:
				system("CLS");
				break;
				
			case 5:
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout <<"Jumlah Tumpukan Baju di Lemari ada  " <<tumpukan.size() <<" baju gan"<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			default:
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout <<"Pilihan tidak ada gan, coba baca lagi pilihannya gan"<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		}
	}while (pilih >=1 && pilih <=4);
	
	return 0;
	
}
