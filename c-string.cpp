#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	char nama[25];
//cin >> nama;
//cout <<nama < endl;

//	cin.get(nama,24, 'a');
//	cout <<nama << endl;

//	cin.getline(nama,24);
//	cout <<nama << endl;
	
	char str[]= "anjing";
	int i=0;
	 while(str[i] != '\0'){
	 	if(str[i]=='i'||str[i] == 'I'){
	 		str[i]='*';
		 }else if (str[i]=='x'||str[i] == 'X'){
	 		str[i]='l';
	 	}
		 i++;
	 }	
	cout << str << endl;

//char str[]= "kelahiran 2022";
//int nilai = atoi(str+10);
//cout << nilai << endl;

//char str[]= "pada 2022, usia saya 10 tahun";
//char *ch;
//int nilai= strtol(str+5, &ch, 10);
//int umur = strtol(ch+12,&ch, 10);
//cout << nilai << endl;
//cout << ch << endl;
//cout << umur << endl;


//char str[] = "12.6";
//char *ch;
//cout << strtol(str, &ch, 10);






















	return 0;
}
