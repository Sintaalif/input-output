#include <iostream>
using namespace std;
/* nama : sinta nurhalifah
   npm : 2117051015
   kelas : b
*/
int main(){
	int arr[5]={7,11,9,1,10};
	bool swapped;
	int temp;
	int indexakhir = 4;
	
	do{
		swapped=false;
		for(int i=0; i<indexakhir; i++ ){
			if(arr[i]>arr[i+1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				swapped = true;
						
			}
		}
	}while(swapped);
	
	for(int i=0; i<5;i++){
		cout<<arr[i]<<" ";
	}
	
	
}
