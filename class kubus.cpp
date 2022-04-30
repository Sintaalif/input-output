#include <iostream>
using namespace std;

class Kubus {
    private:
        double sisi;
   
    public:
        double volume() {
        return this -> sisi * this -> sisi * this -> sisi;
        }
        
        double getSisi(double sisi) {
            return this -> sisi;
        }
 
        void setSisi(double sisi) {
            this -> sisi = sisi;
        }
 
};

int main(){
    Kubus kubus;
    kubus.setSisi(10);
    cout << kubus.volume();
}
