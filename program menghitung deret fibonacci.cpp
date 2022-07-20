#include <iostream>
using namespace std;

int main(){

    int i, batas, deret, fib2=1, fib1=0;

    cout << "Masukan batas : ";
	cin >> batas;

    for (i = 1; i < batas; i++){
        deret = fib2 + fib1;
        fib1 = fib2;
        fib2 = deret;
        cout << deret << " ";
    }

    return 0;
}
