#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    char input [25];

    cin.getline(input, 25);

    int x = strlen(input);
    for(int i = x - 1; i >= -1; i--){
        if(input[i] == ' ' || i < 0){
            int j = i;
            while(j + 1 < x){
                cout << input[j + 1];
                j++;
            }
            x = x - (x - i);
            cout << " ";
        }
    }
}
