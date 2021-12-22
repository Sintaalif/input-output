#include <iostream>

using namespace std;

int main(){
	
	int array[0], i,n;
  float rata, total=0;
  printf("");
  scanf("%d",&n);    
    
  for(i=0; i<n; i++){
    printf("",i+1);
    scanf("%d", &array[i]);
    total = total + array[i];
  }
    
  rata = total/n;
  printf("total: %f \n", total);
  printf("rata-rata: %f \n", rata);
    
  return 0;
}
