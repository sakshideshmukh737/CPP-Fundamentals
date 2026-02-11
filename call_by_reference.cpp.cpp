/* 
This program shows call by reference, where the function directly changes the original variable.
The value of 'a' becomes 100 because the function works on its reference. 
*/

#include <iostream>
using namespace std;

// int &x is a reference to variable a
void change(int &x) {
// Modifies original variable
    x = 100;            
}

int main() {
    int a = 10;

// Passing variable directly
 change(a);          
    // Value of a is changed
    cout << "Value of a: " << a;

    return 0;
}
