#include <iostream>
using namespace std;

class Persegi{
    public:
        double sisi;
       
        double luas()
        {
            return sisi * sisi;
        }
        double keliling()
        {
            return 4 * sisi;
        }
};

int main() {
   Persegi persegi;
   cin >> persegi.sisi;
   cout <<persegi.luas()<<endl;
   cout <<persegi.keliling()<<endl;
}
