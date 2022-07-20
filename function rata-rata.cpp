#include <iostream>
using namespace std;

int  hitungjumlah(int a,int b);
float hitungrata(int jml);
 
main(){
   int x;
   int y;
   int jml;
   float rata;
//   printf("isi nilai x : ");scanf("%d",&x);
//   printf("isi nilai y : ");scanf("%d",&y);
//   jml=hitungjumlah(x,y);
//   rata=hitungrata(jml);
//   printf("jumlah nilai x + y : %d\n",jml);
//   printf("rata-rata nilai : %g\n",rata);
//   getch();
cin >> x;
cin >> y;
jml =hitungjumlah(x,y);
rata=hitungrata(jml);
cout << jml << endl;
cout << rata << endl;
}
 
int hitungjumlah(int a,int b){
                return a+b;
}
 
float hitungrata(int jml){
                return jml/2;
}
