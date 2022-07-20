#include<iostream>
using namespace std;

int partition(int A[],int first,int last){

	int low = first;
	int high = last;
	int pivot;
	pivot = A[low];
	
	while (low < high) {
		    while (low < high && A[high] > pivot) high--;
		    A[low] = A[high];
			while (low < high && A[low] < pivot) low++;
			A[high] = A[low];
	}
	
	A[low] = pivot;

	return low;
}

void quick_sort(int A[],int low,int high){
      
	if (low > high) return;

	int mid = partition(A, low, high);

	quick_sort(A,low,mid-1);
	quick_sort(A, mid + 1, high);

}

void output(int *ptr) {
	cout << endl;
	for (int i = 0;i < 5;i++)cout << ptr[i] << '\t';
	cout << endl;
}

int main() {

	int A[10] = { 3,1,5,6,7 };

	quick_sort(A, 0, 7);
	output(A);
	
	return 0;
}
