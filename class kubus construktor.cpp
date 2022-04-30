#include <iostream>
using namespace std;

class Kubus {
    private:
        double sisi;
   
    public:
        Kubus(){
            this->sisi = 10;
        }
 
        Kubus(double sisi){
            this->sisi = sisi;
        }
 
        Kubus(Kubus &kubus){
            this->sisi = kubus.getSisi();
        }
  
        double volume(){
            return this->sisi*this->sisi*this->sisi;
        }
        
        double getSisi() {
            return this->sisi;
        }
 
        void setSisi(double sisi){
            this->sisi = sisi;
        }

};
int main(){
    Kubus kubus;
cout<<kubus.volume()<<endl;
}
