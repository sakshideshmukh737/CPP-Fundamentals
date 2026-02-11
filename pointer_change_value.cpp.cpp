/* 
This program demonstrates how to use pointers to change a variable's value.
It passes the address of a variable to a function and updates its value.
*/

#include <iostream>
using namespace std;

// Function receives address using pointer
void change(int *x) {
// Dereference pointer to change value
    *x = 100;
}

int main() {
// Initialize variable a
    int a = 10;

// Pass address of a to function
    change(&a);

 // Print updated value of a
    cout << "Value of a: " << a;

 // End program
    return 0;
}
