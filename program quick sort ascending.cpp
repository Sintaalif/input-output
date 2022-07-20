#include<iostream>
using namespace std;
/* nama : sinta nurhalifah
   npm : 2117051015
   kelas : b
*/
	int partition(int arr[], int a, int b){
		int pivot = arr[b];
		
		int i = (a - 1);
		for(int j = a; j <= b -1; j++){
			
			if(arr[j] < pivot){
				i++;
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
		int temp2 = arr[b];
		arr[b] = arr[i+1];
		arr[i+1] = temp2;
		return i+1;
	}
	int quickSort(int arr[], int a, int b){
		if(a < b){
			int r = partition(arr, a, b);
			quickSort(arr, a, r-1);
			quickSort(arr, r+1, b);
		}
	}

int main(){
	int arr[5] = {75, 26, 15, 67, 85};
	int a = 0;
	int b = 4;
	quickSort(arr, a, b );
	for(int i = 0; i <= 4; i++){
		cout << arr[i] <<" ";
	}
	return 0;
}
