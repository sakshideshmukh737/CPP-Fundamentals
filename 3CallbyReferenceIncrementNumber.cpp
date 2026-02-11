/*
This program increases the value of a number using call by reference.
The original variable is changed because the function works on its reference.
*/
#include <iostream>
using namespace std;

// Function increments original variable
void increment(int &x) {
// Increases original value
    x++;               
}

int main() {
    int a = 10;
// Reference passed
    increment(a);       

    cout << a;       
   // Output: 11
    return 0;
}
