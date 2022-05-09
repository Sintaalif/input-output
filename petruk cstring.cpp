#include <iostream>
#include <cstring>
using namespace std;

int main(){
//	char nama[3][9] ={"hasibuan", "naufal", "adi"};
//	char a[] ="naufal";
//	char b[] ="adi";
	//cout << "total size = " << strlen(nama[3]);
	//cout << (char)toupper(a[2]) << endl;
	
//	char nama[9] ={"hasibuan"};
//	for(int i=0;i<9; i++){
//		cout <<(char)toupper(nama[i]);
//	}

//char nama[3][9]={"hasibuan","nauval"};
//for(int i=0; i<3; i++){
//	for (int j=0; j<9; j++){
//		nama[i][j]=(char)toupper(nama[i][j]);
//	}
//}
//cout <<nama[0]<<endl;
//cout <<nama[1]<<endl;	

//char nama [20]= "adiwijaya";
//char umur [20]= "20";
//strcpy(nama+(strlen(nama)-1),"a ");
////cout << strlen(nama) << endl;
//strcpy(nama+strlen(nama)-1, umur);
//cout << nama;

//char nama [20]= " adiwijaya";
//char id [20]= "2006";
//strcpy(nama+(strlen(nama)-1), "a ");
//cout << strlen(nama) <<endl;
//strcpy(nama+strlen(nama), id);
//cout << nama;

//strcpy(id+(strlen(id)-1), "3 ");
//strcpy(id+strlen(id)-1, " : ");
//strcpy(id+strlen(id)-1, " adiwijaya");
//cout <<id;

char nama [20]= " adiwijaya";
char id [20]= "2006";
strcpy(id+(strlen(id) -1), "6 : ");
strcpy(id+strlen(id )-1, nama);
cout << id;

char nomoranggota[225]="adiwijaya2006";
char extracted[225];
strcpy(extracted, nomoranggota + 9);
strcat(extracted, " : ");
strncpy(extracted+(strlen(extracted)-1), nomoranggota, 10);
cout << extracted;













































}
