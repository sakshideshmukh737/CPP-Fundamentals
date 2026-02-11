/* 
This program demonstrates swapping two integers using a temporary variable.
It exchanges the values of a and b and displays the result.
*/

#include <iostream>
using namespace std;

int main() {
// Initialize two integers and a temporary variable
    int a = 5, b = 10, temp;

// Store value of a in temp
    temp = a;

// Assign value of b to a
    a = b;

// Assign value of temp (original a) to b
    b = temp;

// Display new value of a
    cout << "a = " << a << endl;

// Display new value of b
    cout << "b = " << b << endl;

// End program
    return 0;
}
