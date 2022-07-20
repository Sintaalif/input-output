#include <iostream>
using namespace std;

struct Registrasi{
	char nama[10];
	char asal_sekolah[20];
	char alamat[10];
	char jenis_kelamin[10];
	long ttl;
};
int main(){
	int a=0;
	int pilih;
	Registrasi daftar;
	cout <<"1.Pendaftaran sekolah "<<endl;
	cout <<"2. Memilih jurusan pilihan"<<endl;
	cout <<"masukan pilihan : ";
	cin >>pilih;
	if(pilih==1){
	
	cout <<"Nama lengkap : ";
	cin >>daftar.nama;
	cout <<"Asal sekolah : ";
	cin >>daftar.asal_sekolah;
	cout <<"Jenis kelamin : ";
	cin >>daftar.jenis_kelamin;
	cout <<"Tempat/tanggal lahir : ";
	cin >>daftar.ttl;
	cout <<"Alamat : ";
	cin >>daftar.alamat;
	cout <<endl;
	
	cout <<endl;
	cout <<"Data pendaftaran siswa sekolah : " << "Nama lengkap "<<daftar.nama <<", "<<"Asal sekolah " <<daftar.asal_sekolah <<", "<<"Jenis kelamin " <<daftar.jenis_kelamin <<", "<<"Tempat/tanggal lahir " <<daftar.ttl <<", "<<"Alamat " <<daftar.alamat <<endl;
	cout <<endl;
	cout <<"Data anda telah disimpan";
	
}else if(pilih==2){
	cout <<"masukan data mahasiswa :";
	cin >>a;
	for(int i=1; i<=a; i++){
	cout <<"Nama : ";
	cin >>daftar.nama;
	cout <<"Asal sekolah : ";
	cin >>daftar.asal_sekolah;
	cout <<"1. IPA"<<endl;
	cout <<"2. IPS"<<endl;
	cout <<"masukan pilihan : ";
	cin >>pilih;
	if(pilih==1){
	cout <<"Nama " << daftar.nama <<" "<<"Asal sekolah "<<daftar.asal_sekolah <<" "<<"jurusan"<<" IPA" <<endl;
	}else if(pilih==2){
	cout <<daftar.nama <<" "<<daftar.asal_sekolah <<" "<<"IPS" <<endl;
	}
	cout <<endl;
}
	
}
	
	
}
