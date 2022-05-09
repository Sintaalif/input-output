#include <iostream>
#include <cstring>
using namespace std;

int main (){
    char nama[20], kata;
    int total=0, space=0;
    
    cin>>kata;
    cin.ignore(256,'\n');
    cin.getline(nama, 25, '\n');
    
    for (int i=0; true; i++)
        if (nama[i]== '.'){
            break;
            
        }else{
            if (nama[i] == kata || nama[i] == kata){
				total++;
                
            }else if(nama[i] == ' '){
                space++;
        }
    }
    cout << total << " " << space;
}


