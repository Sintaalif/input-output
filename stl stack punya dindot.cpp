#include <bits/stdc++.h> 
using namespace std; 
 
void display(stack <int> S) 
{ 
    while (!S.empty()) 
    { 
        cout << '\t' << S.top(); 
        S.pop(); 
    } 
    cout << '\n'; 
} 
 
int main () { 
    stack <int> s; 
    s.push(1); 
    s.push(0); 
    s.push(2); 
    s.push(6); 
     
 
    cout << "The stack is : "; 
    display(s); 
 
  
    cout << "\nThe top element of the stack:\n" << s.top(); 
 
 
    cout << "\nStack after removing the top element from the stack:\n"; 
    s.pop(); 
    display(s); 
 
    return 0; 
}
