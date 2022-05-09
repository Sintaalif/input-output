#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int i=0, j, bts;
    cin >> bts;
    char kata[bts][20], b[bts][20];
    
    while(i <= bts){
    	cin.getline(kata[i], 20);
    	i++;
    }
	for(i = 0; i <= bts; i++){
    	for(j = 0; j < 20; j++){
    		b[i][j]=toupper(kata[i][j]);
		}
    }
	for(i = 1; i <= bts; i++){
		if(strcmp(kata[i],b[i])){
			cout << "Kecil" << endl;
		}else{
			cout << "Besar" << endl;
		}
	}	
	
    return 0;
}
