#include <iostream>
using namespace std;

struct data{
	string NPM;
	string nama;
	int UTS;
	int UAS;
};

class maha{
	public:
data s1;
	
       // Getter dan Setter
        string getNama() {
            return this->s1.nama;
        }
		void setNama(string nama) {
            this->s1.nama = nama;
        }

        string getNpm() {
            return this->s1.NPM;
        }

        void setNpm(string npm) {
            this->s1.NPM = npm;
        }
        
        int getUAS() {
            return this->s1.UAS;
        }
        
		void setUAS(int uas) {
            this->s1.UAS = uas;
        }

        int getUTS() {
            return this->s1.UTS;
        }

        void setUTS(int uts) {
            this->s1.UTS= uts;
        }

	void assign(int uts, int uas){
		this->s1.UAS=uts;
		this->s1.UTS=uts;
	}
    
	//fungsi float   
	float NA(){
	int na = (UAS + UTS) / 2;
	return na; 
}

	//fungsi char
	char grade(){
 	char gr;

   if((NA()>=80)&& (NA()<=100)){
   gr = 'A';
   }else if((NA()>=68)&& (NA()<80)){
   gr = 'B';
   }else if((NA()>=56)&& (NA()<68)){
   gr = 'C';
   }else if((NA()>=45 )&& (NA()<56)){
   gr = 'D';
   }else if(NA() < 45){
   gr = 'E';
   }
   return gr;
}
};



int main(){
	maha d1;
	
	cout <<"masukan nama : ";
	cin >>d1.nama;
	cout <<"masukan NPM : ";
	cin >>d1.NPM;
	cout <<"masukan nilai UAS : ";
	cin >>d1.UAS;
	cout <<"masukan nilai UTS : ";
	cin >>d1.UTS;
	d1.assign(d1.UAS,d1.UTS);
	cout <<endl;
	
	//output 
	cout <<"Nama : " <<d1.nama <<endl;
	cout <<"NPM : " <<d1.NPM <<endl;
	cout <<"Nilai Akhir : " <<d1.NA() <<endl;;
	cout <<"Huruf Mutu : " <<d1.grade();
}
