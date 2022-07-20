#include <iostream>	//untuk cin dan cout
#include <cstdlib> 	//untuk fungsi exit(0)
#include <windows.h>  //untuk fungsi color
using namespace std;

//procedure
 void header (){
 	            cout<<"\n\t\t   ==============================================================================";
                cout<<"\n\t\t                    >>  SELAMAT DATANG DI WAROENG MINYAK GORENG  <<              ";
                cout<<"\n\t\t                          												          ";                            
                cout<<"\n\t\t   ==============================================================================";
}

void list (){
	//deklarasi variabel
	int harga,pilihan_liter,jumlah;
	char pilihan;
		
	//array
	string pilihan_merk[5]={"[A]. Bimoli", "[B]. Filma", "[C]. Tropical", "[D]. Tropicana Slim", "[E]. Sunco"};
	
	cout<<"\n\n\n\n\t\t             >> Silahkan pilih merk minyak goreng <<"<<endl;	
	
	//looping
	for (char i=0; i<=5; i++){
		cout <<pilihan_merk[i]<<endl;

	} 
	
    cout<<"Masukan Merk Minyak Yang Di Pilih : ";
 	cin>>pilihan;

 	//selection
 	switch(pilihan){
    case 'A':
    	cout << "1. Bimoli 1 liter       : Rp. 50000"<<endl;
    	cout << "2. Bimoli 2 liter       : Rp. 100000"<<endl;
    	cout <<"masukan pilihan :";
    	cin >> pilihan_liter;
    	if (pilihan_liter == 1){
    		harga=50000;
    		cout <<"anda membeli minyak goreng bimoli dengan harga " << harga<<endl;
		}else if (pilihan_liter== 2){
			harga=100000;
			cout <<"anda membeli minyak goreng bimoli dengan harga " << harga<<endl;
		}
		break;
		
	case 'B':
		cout << "1. Filma 1 liter       : Rp. 40000"<<endl;
    	cout << "2. Filma 2 liter       : Rp. 80000"<<endl;
    	cout <<"masukan pilihan :";
    	cin >> pilihan_liter;
    	if (pilihan_liter == 1){
    		harga=40000;
    		cout <<"anda membeli minyak goreng Filma dengan harga " << harga<<endl;
		}else if (pilihan_liter == 2){
			harga=80000;
			cout <<"anda membeli minyak goreng Filma dengan harga " << harga<<endl;
		}
		break;
		
	case 'C':
		cout << "1. Tropical 1 liter       : Rp. 55000"<<endl;
    	cout << "2. Tropical 2 liter       : Rp. 110000"<<endl;
    	cout <<"masukan pilihan :";
    	cin >> pilihan_liter;
    	if (pilihan_liter == 1){
    		harga=55000;
    		cout <<"anda membeli minyak goreng Tropical dengan harga " << harga<<endl;
		}else if (pilihan_liter == 2){
			harga=110000;
			cout <<"anda membeli minyak goreng Tropical dengan harga " << harga<<endl;
		}
		break;
		
	case 'D':
		cout << "1. Tropicana Slim 1 liter       : Rp. 60000"<<endl;
    	cout << "2. Tropicana Slim 2 liter       : Rp. 120000"<<endl;
    	cout <<"masukan pilihan :";
    	cin >> pilihan_liter;
    	if (pilihan_liter == 1){
    		harga=60000;
    		cout <<"anda membeli minyak goreng Tropicana Slim dengan harga " << harga<<endl;
		}else if (pilihan_liter == 2){
			harga=120000;
			cout <<"anda membeli minyak goreng Tropicana Slim dengan harga " << harga<<endl;
		}
		break;
		
	case 'E':
		cout << "1. Sunco 1 liter       : Rp. 30000"<<endl;
    	cout << "2. Sunco 2 liter       : Rp. 60000"<<endl;
    	cout <<"masukan pilihan :";
    	cin >> pilihan_liter;
    	if (pilihan_liter == 1){
    		harga=30000;
    		cout <<"anda membeli minyak goreng Sunco dengan harga " << harga<<endl;
		}else if (pilihan_liter == 2){
			harga=60000;
			cout <<"anda membeli minyak goreng Sunco dengan harga " << harga<<endl;
		}
		break;
	default :
		cout <<"maaf, Pilihan tidak ada"<<endl;
		exit(0);	//fungsi exit(0) untuk memberhentikan program ketika kondisi tidak terpenuhi
		break;

}

	cout<<"Berapa Banyak jumlah Pesanan? ";
    cin>>jumlah;
} 

//functions
int total_harga(int x, int y){
	int hasil = x * y;
	return hasil;
}


int main(){
	int x,y,jumlah;
	char yesNo;
	
	system("color A");		//untuk warna teks program

	//looping
    do{
    system("CLS");			//untuk membersihkan layar
    header();
	list();
	cout <<"masukan kembali jumlah pesanan minyak yang dibeli : ";
	cin >> x;
	cout <<"masukan kembali harga minyak yang dibeli :";
	cin >> y;
	cout <<"total = "<<total_harga(x,y)<<endl;
	
	cout<<"\n\t\t 	            		>> struk belanja <<";
	cout<<"\n\t\t   ==============================================================================";
	cout<<"\n\t\t   			jumlah minyak goreng yang dibeli : " << x ;
	cout<<"\n\t\t  			harga minyak goreng yang dibeli : Rp." << y ;
	cout<<"\n\t\t   			Total harga yang harus dibayar : Rp." <<total_harga(x,y);
	cout<<"\n\t\t   ==============================================================================";
	
	cout <<endl;
	cout<<"Apakah Anda ingin memesan lagi? (Y/N)?";
	cin>>yesNo;
	}while (yesNo == 'Y' || yesNo == 'y');
	system("CLS");			//untuk membersihkan layar
	
	cout<<"\n\t\t   ==============================================================================";
	cout<<"\n\t\t  	  >> TERIMA KASIH TELAH BERBELANJA DI WAROENG MINYAK GORENG <<";
	cout<<"\n\t\t   ==============================================================================";
	return 0;
}
