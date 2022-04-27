#include <iostream>
using namespace std;

//int main(){
//int bill[4]={1,2,3,4};
//cout << bill[0] << endl;
//
//int search = 2;
//for (int i=0; i<4; i++){
//	if (bill[i] = search){
//		cout<< "indeks ke " << i;
//	}
//}	
//
//int size =sizeof (bill) /sizeof(int);
//cout << size << endl;
//
//int size =sizeof(bill) /sizeof(int);
//int max = bill[0];
//for (int i=0; i<size; i++){
//	if (bill[i] > max){
//		max =bill[i];
//	}
//}
//cout << "maximum : " << max <<endl;
//
//for (int i=0; i< size; i++){
//	if(bill[i] = max ){
//		cout <<"indeks maximum :" <<i<<endl;
//	}
//}
//
//for ( int i=0; i < size; i++){
//	for (int j=0; j<size; j++){
//		int temp;
//		if (bill[j] > bill[j+1]){
//			temp =bill[j];
//			bill[j] = bill[j+1];
//			bill[j+1] =temp;
//		}
//	}
//}

int main(){
	int m[2][5] = {{5,2,3,3,4}, {6,7,8,9,10} };
	
//	cout << m[0][4] << endl;


int row,col,i,j;
cout << "masukan baris : ";
cin >> row ;
cout << "masukan kolom : ";
cin >> col;

int m1[row][col], m2[row][col], res[row][col];
cout << "masukan" << row*col << "data matriks 1:" <<endl;
for(i=0; i< row; i++){
	for(j=0; j < col; j++){
		cin >> m1[i][j];
	}
}	
cout << "masukan" << row*col << "data matriks 2:" <<endl;
for(i=0; i< row; i++){
	for(j=0; j< col; j++){
		res[i][j] = m1[i][j] + m2[i][j];
	}
}
cout <<"hasil penjumlahan :"<<endl;
for(i=0; i< row; i++){
	for(j=0; j< col; j++){
	cout << res[i][j] << " ";
	}
	cout << endl;
}
}
























