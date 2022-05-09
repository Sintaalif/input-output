#include <iostream>
using namespace std;

typedef long long int lli;

struct Mahasiswa {
// public
    string nama;
    string npm;
    int nilai;
};

class Dosen {
    
    private:
        string nama;
        double nilai;

    public:

        Dosen(){
            nama = "-";
            nilai = 0;
        }
        
        Dosen(string nama, double nilai){
            this->nama = nama;
            this->nilai = nilai;
        }

        Dosen(Dosen &d){
            nama = d.nama;
            nilai = d.nilai;
        }

        void setNama(string n) {
            nama = n;
        }

        string getNama(){
            return nama;
        }

        void setNilai(double nilai)
        {
            this->nilai = nilai;
        }

        double getNilai(){
            return nilai;
        }


        void cetak(){
            cout << nama << endl;
            cout << nilai << endl;
        }
};

int main() {

    Dosen d1("Dosen 1233", 1234);
    Dosen d2("abcd", 0);
    Dosen d3(d1);

    cout << d1.getNama() << endl;
    cout << d1.getNilai() << endl;
    cout << endl;
    cout << d3.getNama() << endl;
    cout << d3.getNilai() << endl;
}