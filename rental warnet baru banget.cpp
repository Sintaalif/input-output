#include <iostream>
using namespace std;

class jam{
	public:
	string nama;
	int jam,menit,detik;
	
       // Getter dan Setter
        string getNama() {
            return this->nama;
        }
		void setNama(string nama) {
            this->nama = nama;
        }

        int getJam() {
            return this->jam;
        }

        void setJam(int jm) {
            this->jam = jm;
        }
        
        int getMenit() {
            return this->menit;
        }
        
		void setMenit(int mnt) {
            this->menit = mnt;
        }

        int getDetik() {
            return this->detik;
        }

        void setDetik(int dtk) {
            this->detik= dtk;
        }

	int byr(int n1, int n2, int n3){
	n1=jam*120*130;
 	n2=menit*260;
 	n3=detik*130/30;
    int Bayar=n1+n2+n3;
    return Bayar;
}
	
	void header(){
	cout<<"\n===================================================================  ";
	cout<<"\n>>>>>>>>>>>>>>>>>> PROGRAM RENTAL WARNET <<<<<<<<<<<<<<<<<<<<<<<<<< ";
	cout<<"\n>>>>>>>>>>>>>>>>>>>>>>>> 30 DETIK = RP.130 <<<<<<<<<<<<<<<<<<<<<<<<  ";
	cout<<"\n===================================================================  ";
}
};



int main(){
	jam d1;
	
	void header();
	cout <<"masukan nama : ";
	cin >>d1.nama;
	cout <<"masukan jam: ";
	cin >>d1.jam;
	cout <<"masukan menit : ";
	cin >>d1.menit;
	cout <<"masukan detik : ";
	cin >>d1.detik;
	
	cout<<"\n Anda Harus Membayar Uang Sebesar :   Rp. "<<d1.byr(d1.jam,d1.menit,d1.detik)<<endl;
}
