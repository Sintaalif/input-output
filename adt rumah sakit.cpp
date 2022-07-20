#include<iostream>
using namespace std;

/*Membuat data tanggal lahir pasien dengan menggunakan syntax tyedef yang mana merupakan kode dalam data ADT dan syntax character yang meruakan salah satu tipe data pada bahasa pemrograman C. data ini diberi nama lahir */
typedef struct{
    char dd[10];
    char mm[10];
    char hh[10];
}lahir;

/*Membuat data diri pasien dengan menggunakan syntax typedef dan syntax character. data ini diberi nama pasien*/
typedef struct{
    char nama[100];
    char NIK[20];
    char jenis_kelamin[10];
    char alamat[100];
    lahir L;
}pasien;

/*Membuat perintah untuk melakukan inputan data diri pasien dari pengguna sesuai dengan data pada data pasien dan data lahir*/
pasien InputDataPasien (pasien P) {
	cout <<"INPUT DATA PASIEN" <<endl;
	cout <<"Rumah Sakit Bangkit Bersama" <<endl;
	cout <<"Nama : ";
	cin >>P.nama;
	cout <<"NIK : ";
	cin >>P.NIK;
	cout <<"Tanggal lahir (contoh : DD MM YYYY) : ";
	cin >>P.L.dd >>P.L.mm >>P.L.hh;
	cout <<"Jenis Kelamin : ";
	cin >>P.jenis_kelamin;
	cout <<"Alamat : ";
	cin >>P.alamat;
	cout <<endl;
return P; /*digunakan fungsi return P untuk kembalikan nilai yang tersimpan di dalam variabel input data pasien kepada kode yang akan memanggil fungsi tersebut*/

}

/*Membuat perintah untuk menampilkan data pasien yang telah diinputkn oleh pengguna*/
void TampilkanDataPasien (pasien P) {

	cout <<"DATA PASIEN" <<endl;
	cout <<"Rumah Sakit Bangkit Bersama" <<endl;
	cout <<"Nama : " <<P.nama <<endl;
	cout <<"NIK : " <<P.NIK <<endl;
	cout <<"tanggal Lahir : " <<P.L.dd <<P.L.mm <<P.L.hh <<endl;
	cout <<"jenis Kelamin : " <<P.jenis_kelamin <<endl;
	cout  <<"Alamat : " <<P.alamat <<endl;

}

int main() {
pasien P;

P=InputDataPasien(P);
TampilkanDataPasien(P);

return 0;
}
