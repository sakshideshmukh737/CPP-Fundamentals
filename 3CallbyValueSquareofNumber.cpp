/* 
This program calculates the square of a number using call by value.
The function works on a copy of the variable, so the original value of 'a' is not changed.
 */
#include <iostream>
using namespace std;

// Function returns square of number
int square(int x) {
// Uses local copy of x
    return x * x;       
}
int main() {
    int a = 4;

// Value is passed, result is returned
    cout << square(a);

    return 0;
}
