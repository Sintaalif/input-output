#include <iostream>
using namespace std; 

struct data{
	string nama; 
	int npm, nilai_UTS, nilai_UAS; 
}mhs;

class maha{
	public :
//	data mhs;
	
	maha(){
		mhs.nama = "Vidya Sinta Billkis";
		mhs.npm = 2117051029;
		mhs.nilai_UTS = 70; 
		mhs.nilai_UAS = 90; 
	}
	
	maha(string nama, int npm, int UTS, int UAS){
		this->mhs.nama = nama; 
		this->mhs.npm = npm; 
		this->mhs.nilai_UTS = UTS;
		this->mhs.nilai_UAS = UAS; 
	}
	
	maha(maha &m){
		mhs.nama = m.mhs.nama; 
		mhs.npm = m.mhs.npm; 
		mhs.nilai_UTS = m.mhs.nilai_UTS;
		mhs.nilai_UAS = m.mhs.nilai_UAS;  
	}
	
	void setNama(string n){
		mhs.nama = n; 
	}
	
	string getNama(){
		return mhs.nama; 
	}
	
	void setNpm(int p){
		mhs.npm = p; 
	}
	
	int getNpm(){
		return mhs.npm; 
	}
	
	void setUTS(int t){
		mhs.nilai_UTS = t; 
	}
	
	int getUTS(){
		return mhs.nilai_UTS; 
	}
	
	void setUAS(int a){
		mhs.nilai_UAS = a; 
	}
	
	int getUAS(){
		return mhs.nilai_UAS; 
	}
	
	float nilaiAkhir(){
		int nilai = (mhs.nilai_UTS + mhs.nilai_UAS)/2;
		return nilai; 
	}

	char hurufMutu(){
		char mutu; 
		
		if (nilaiAkhir()>=80 && nilaiAkhir()<=100){
			mutu = 'A'; 
		} else if (nilaiAkhir()>=68 && nilaiAkhir()<80){
			mutu = 'B';
		} else if (nilaiAkhir()>=56 && nilaiAkhir()<68){
			mutu = 'C';
		} else if (nilaiAkhir()>=45 && nilaiAkhir()<56){
			mutu = 'D';
		} else {
			mutu = 'E';
		}
		
		return mutu; 
	}
	
};

int main(){
	maha m1; 
	
	cout << m1.getNama() <<endl;
	cout << m1.getNpm() <<endl; 
	cout << m1.nilaiAkhir() <<endl; 
	cout << m1.hurufMutu() <<endl; 
}
