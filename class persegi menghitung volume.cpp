#include <iostream>
using namespace std;
 
class Persegi{
    public:
        double sisi;
       
        double keliling(){
            return 4 * sisi;
        }
         double luas(){
            return sisi * sisi;
        }
};

int main(){
    int n;
    cin >> n;
 
    Persegi persegi[n];
 
    for (int i = 0; i < n; i++){
        cin >> persegi[i].sisi;
    }
   
    for (int i = 0; i < n; i++){
        cout << persegi[i].luas() * persegi[i].sisi << endl;
    }
}
