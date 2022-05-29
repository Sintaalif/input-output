//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int main(){
//	stack <int> tumpukan;
//	int pilih;
//	int input;
//	
//	do{
//        cout<<"================================================="<<endl;
//        cout<<"============ Program Tumpukan Sampah ============"<<endl;
//        cout<<" 1. Push (Masukan sampah)"<<endl;
//        cout<<" 2. Pop (Mengambil sampah)"<<endl;
//        cout<<" 3. Melihat sampah"<<endl;
//        cout<<" 4. hapus"<<endl;;
//        cout<<"================================================="<<endl;	
//        
//        cout <<"Masukan Pilihan (1-4) : ";
//		cin >> pilih;
//		
//			switch (pilih){			//percabangan switch case
//			case 1:
//				if(tumpukan.empty()){
//					cout <<"Masukan Sampah :"<<endl;
//					for(int i=0; i<5; i++){
//					cin >> input;
//					tumpukan.push(input);
//				}
//			}
//				cout <<endl;
//				break;
//				
//			case 2:
//				if (tumpukan.empty()){		//kondisi jika data masih kosong
//					cout <<">>>>>Tumpukan Sampah Sudah Kosong<<<<<<" ;
//				}else{
//					cout <<"Data tumpukan sampah ["<<tumpukan.top() <<"] telah di buang" <<endl;
//					tumpukan.pop();
//				}
//				cout <<endl;
//				break;
//			
//			case 3:
//				if(tumpukan.empty()){			//kondisi jika data masih kosong
//					cout <<">>>>>Tumpukan Sampah Sudah Kosong<<<<<<" ;
//				}else {
//						while (!tumpukan.empty()){
//						cout <<"["<<tumpukan.top() <<"]"<<endl;
//						tumpukan.pop();
//					}
//				}
//				break;
//			case 4:
//				system("CLS");
//		}
//	}while (pilih >=1 && pilih <=4);
//	
//	return 0;
//	
//}
