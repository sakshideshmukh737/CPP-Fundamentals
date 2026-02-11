/* 
This program demonstrates call by value in C++.
The function works on a copy of the variable, so the original value of 'a' remains unchanged.
*/

// Header file for input/output
#include <iostream>      
using namespace std;

// Function definition
// int x receives a COPY of variable a
void change(int x) {
    x = 100;            
}

int main() {
    int a = 10;         

    change(a);         

// Original value remains unchanged
    cout << "Value of a: " << a;

    return 0;           
}
