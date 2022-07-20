#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack <string> tumpukan;
	int pilih;
	string input;
	
	do{
        cout<<"================================================="<<endl;
        cout<<"======== PROGRAM TUMPUKAN KERTAS di FOTO COPY ========"<<endl;
        cout<<" 1. Masukan kertas yang akan di foto copy" <<endl;
        cout<<" 2. Mengambil kertas yang akan di foto copy" <<endl;
        cout<<" 3. Melihat Tumpukan kertas yang sudah di foto copy" <<endl;
        cout<<" 4. Hapus" <<endl;
        cout<<" 5. Melihat Jumlah Tumpukan kertas yang sudah di foto copy"<<endl;
        cout<<"================================================="<<endl;	
        
        cout <<"Masukan Pilihan (1-5) : ";
		cin >> pilih;
		
			switch (pilih){			//percabangan switch case
			case 1:
				cout<<"================================================="<<endl;
					cout <<"Masukan kertas yang akan di foto copy:"<<endl;
					cin >> input;
//					getline(cin,input);
					tumpukan.push(input);
					system("CLS");

				cout <<endl;
				break;
			case 2:
				if (tumpukan.empty()){		//kondisi jika data masih kosong
					cout <<">>>>>Tidak ada tumpukan kertas yang sudah di foto copy gan<<<<<<" ;
				}else{
					cout <<"Tumpukan kertas ["<<tumpukan.top() <<"] telah di ambil untuk di foto copy" <<endl;
					tumpukan.pop();
				}
				cout <<endl;
				break;
			
			case 3:
				if(tumpukan.empty()){			//kondisi jika data masih kosong
					cout <<">>>>>Tidak ada tumpukan kertas yang sudah di foto copy gan<<<<<<" ;
				}else {
						while (!tumpukan.empty()){
						cout <<"["<<tumpukan.top() <<"]"<<endl;
						tumpukan.pop();
					}
				}
				break;
			case 4:
				system("CLS");
				break;
				
			case 5:
				cout <<"Jumlah Tumpukan kertas yang sudah di foto copy ada  " <<tumpukan.size() <<" lembar kertas gan"<<endl;
				break;
			default:
				cout <<"Pilihan tidak ada gan";
		}
	}while (pilih >=1 && pilih <=4);
	
	return 0;
	
}
