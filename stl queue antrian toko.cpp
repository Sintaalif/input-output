//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main(){
//	queue <int> antrian;
//	int pilih;
//	int input;
//	
//	do{
//        cout<<"================================================="<<endl;
//        cout<<"============ Program Antrian Toko ============"<<endl;
//        cout<<" 1. Push (masukan antrian)"<<endl;
//        cout<<" 2. Pop "<<endl;
//        cout<<" 3. Melihat antrianh"<<endl;
//        cout<<" 4. Hapus"<<endl;
//        cout<<"================================================="<<endl;	
//        
//        cout <<"Masukan Pilihan (1-4) : ";
//		cin >> pilih;
//		
//			switch (pilih){			//percabangan switch case
//			case 1:
//				if(antrian.empty()){
//					cout <<"Masukan Antrian :"<<endl;
//					for(int i=0; i<5; i++){
//					cin >> input;
//					antrian.push(input);
//				}
//			}
//				cout <<endl;
//				break;
//				
//			case 2:
//				if (antrian.empty()){		//kondisi jika data masih kosong
//					cout <<">>>>>Antrian Sudah Kosong<<<<<<" ;
//				}else{
//					cout <<"Data Antrian ["<<antrian.front() <<"] telah di ambil" <<endl;
//					antrian.pop();
//				}
//				cout <<endl;
//				break;
//			
//			case 3:
//				if(antrian.empty()){			//kondisi jika data masih kosong
//					cout <<">>>>>Antrian Sudah Kosong<<<<<<" ;
//				}else {
//						while (!antrian.empty()){
//						cout <<"["<<antrian.front() <<"]"<<endl;
//						antrian.pop();
//					}
//				}
//				break;
//			
//			case 4:
//				system("CLS");
//		}
//	}while (pilih >=1 && pilih <=4);
//	
//	return 0;
//	
//}
