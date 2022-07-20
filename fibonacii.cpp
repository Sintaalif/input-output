#include <iostream>
using namespace std;

int main(){
    int batas, fib1 = 0, fib2 = 1, deret = 0;

    cout << "Masukan Batas :  ";
    cin >> batas;
	cout<<endl;
    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= batas; ++i){
        // Mencetak dua deret bilangan fibonacci pertama.
        if(i == 1){
            cout << " " << fib1<<" ";
            continue;
        }
        if(i == 2){
            cout << fib2 << " ";
            continue;
        }
        
        deret = fib1 + fib2;
        fib1 = fib2;
        fib2 = deret;
         // Mencetak deret bilangan fibonacci berikutnya.
        cout << deret << " ";
    }
    return 0;
}
