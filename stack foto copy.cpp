#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack <string> tumpukan;
	int pilih;
	string input;
	
	do{
        cout<<"================================================="<<endl;
        cout<<"======== PROGRAM TUMPUKAN BERKAS di FOTO cOPY ========"<<endl;
        cout<<" 1. Masukan berkas yang ingin di Foto copy" <<endl;
        cout<<" 2. Mengambil Berkas  yang akan di foto copy" <<endl;
        cout<<" 3. Melihat Tumpukan Baju di Lemari" <<endl;
        cout<<" 4. Melihat Jumlah Tumpukan berkas yang telah di foto copy" <<endl;
        cout<<" 5. Hapus"<<endl;
        cout<<"================================================="<<endl;	
        
        cout <<"Masukan Pilihan (1-5) : ";
		cin >> pilih;
		
			switch (pilih){			//percabangan switch case
			case 1:
				cout<<"================================================="<<endl;
					cout <<"Masukan Baju :"<<endl;
					cin >> input;
					tumpukan.push(input);
					cout <<"Tumpukan baju "<<input << " telah dimasukan kedalam lemari";

				cout <<endl;
				break;
			case 2:
				if (tumpukan.empty()){		//kondisi jika data masih kosong
					cout <<">>>>>Tumpukan Baju di Lemari Sudah Kosong<<<<<<" ;
				}else{
					cout <<"Tumpukan Baju ["<<tumpukan.top() <<"] telah di ambil" <<endl;
					tumpukan.pop();
				}
				cout <<endl;
				break;
			
			case 3:
				if(tumpukan.empty()){			//kondisi jika data masih kosong
					cout <<">>>>>Tumpukan Baju dilemari Sudah Kosong<<<<<<" ;
				}else {
						while (!tumpukan.empty()){
						cout <<"["<<tumpukan.top() <<"]"<<endl;
						tumpukan.pop();
					}
				}
				break;
			case 4:
				cout <<"Jumlah Tumpukan Baju di Lemari ada  " <<tumpukan.size() <<" baju"<<endl;
				break;
				
			case 5:
				system("CLS");
			default:
				cout <<"Pilihan tidak ada!";
		}
	}while (pilih >=1 && pilih <=4);
	
	return 0;
	
}
