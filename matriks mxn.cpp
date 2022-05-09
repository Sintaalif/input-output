#include <iostream>
using namespace std;

int main(){
	int k, n, m, i, j;
    int matriks[10][10];
    
    cin >> m;
    cin >> n;
	cin >> k;
	
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            cin >> matriks[i][j];
        }
    }
    
    for (i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << matriks[i][j] * k << " ";
        }	
		cout << endl;
    }
}
