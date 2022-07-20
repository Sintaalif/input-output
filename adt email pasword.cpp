#include <iostream>
using namespace std;

//membuat tipe data baru yang bernama email yang menampung variabel email dan pass bertipe data char
typedef struct{
    char email[50];
    char pass[50];
//	char listAdd[50];
} email;

// variabel untuk perhitungan besar/panjang dari variabel list dibawah
int d = 0;
//membuat array yang bernama list (max 10 element) dengan tipe data email 
email list[10];

void listAdd(email mail){
    list[d++] = mail;
}

//fungsi untuk input dan memasukkan data kedalam tipe data email 
void Register(){
    email mail;

    cout << endl;
    cout << "Masukkan alamat Email: "; 
	cin >> mail.email;
    cout << "Masukkan Password: "; 
	cin >> mail.pass;

    listAdd(mail);
}

//fungsi untuk print out(menampilkan) hasil dari data yang dimasukkan
void displayData(email mail, int i){
    cout << endl;
    cout << i + 1 << ".)" << endl;
    cout << "Email: " << mail.email << endl;
    cout << "Pass: " << mail.pass << endl;
}

//fungsi untuk memilih tipe data email di dalam array berdasarkan alamat dimemory
void select(email &mail, int i){
    if (i<d){
        mail = list[i];	//alamat yang di kirim dari parameter akan di isi oleh list(array) index i
    }
}

//fungsi untuk menampilkan semua data yang tersedia menggunakan looping
void semuaData(){
    email mail;
    int i;

    for (i = 0 ; i < d ; i++){ //looping yang dijalankan jika variabel d(jumlah list) lebih dari variabel i
        select(mail, i);
        displayData(mail, i);
    }
}

//fungsi untuk menampilkan menu untuk memudahkan user menggunakannya
void mainMenu(){
    cout << endl;
    cout << "=========================\n";
    cout << "   1.) Register\n";
    cout << "   2.) Tampilkan Data\n";
    cout << "   3.) Keluar\n";
    cout << "=========================\n";
    cout << "Masukkan pilihan: ";
}

int main(){
   int end = 0; //variable nilai awal untuk looping
   char pilihan;
   while (end == 0){
        mainMenu(); //menampilkan main menu
        cin >> pilihan;
        switch(pilihan) { //switch digunakan untuk pemilihaan fungsi yang ingin di jalankan
            case '1': Register();
                    break;
            case '2': semuaData();
                    break;
            case '3': cout << "Keluar\n";
                    end = 1;  //mengganti nilai ke 1 untuk memberhenti kan looping
                    break;
            default:  cout << "Pilih pilihan yang benar!\n";
        }
   }
   return 0;
}
