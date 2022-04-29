#include <iostream>
using namespace std;

//int main(){
//	int a = 5;
//	int *ptrA = &a;
//	cout << ptrA << endl;
//	cout << *ptrA << endl;
//	
//	*ptrA = 10;
//	cout << a << endl;
//	
//	//pointer pada array
//	int arr[] = {1,2,3,4,5};
//	int *ptrArr = &arr[2];
//	
//	cout << *ptrArr << endl;
//	cout << *(ptrArr - 1) << endl;
//	cout << *(ptrArr + 2 ) << endl;
	
	//pointer arithmatic
//	int arr[]= {1,2,3,4,5};
//	cout << "indeks-1 : " << *(arr +1) << endl;
//	cout << "indeks-2 : " << *(arr +2) << endl;
//	cout << "indeks-3 : " << *(arr +3) << endl;
//	cout << "indeks-4 : " << *(arr +4) << endl;
//	cout << "indeks-5 : " << *(arr +5) << endl;
//}



//void a(int *b);
//int main(){
//	int arr[2] = {1,2};
//	a(&arr[5]);
//}
//void a(int *b){
//	cout << *(b-4);
//	//cout
//}


//void a(int *b);
//int main(){
//	int a=10;
//	float b=2;
//	void * vp;
//	vp=&a;
//	vp=&b;
//	cout << (float)8 <<endl;
//	cout << (int*)vp << endl;
//}
	void swap(int *a, int *b){
		int temp =*a;
		*a=*b;
		*b=temp;
	}
	
	void sort(int * arr, int n){
		for (int i=0; 1 <n; i++){
			for (int j=i+1; j<n; j++){
				if(*(arr+i) > *(arr+j)){
					swap(*(arr+1),*(arr+j));
				}
			}
		}
	}
int main(){
	int a= 10;
	int b=5;
	swap(a,b);
	int arr[]={10,17,7,6,20,3,45};
	cout <<"a : " << a << endl << "b: " << b << endl;
	
	sort(arr, (sizeof(arr)/sizeof(int)));
	 for(int i = 0;i < (sizeof(arr)/sizeof(int));i++){
        cout << arr[i] << " ";
    }
}
































































