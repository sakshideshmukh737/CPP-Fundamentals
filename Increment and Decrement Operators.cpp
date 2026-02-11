/* 
This program demonstrates pre-increment and post-decrement operators in C++.
It shows how the value of a variable changes with these operators.
*/

#include <iostream>
using namespace std;

int main() {
    // Initialize variable
    int a = 5;

    // Pre-increment: increment first, then use
    cout << "Pre-increment: " << ++a << endl;

    // Post-decrement: use first, then decrement
    cout << "Post-decrement: " << a-- << endl;

    // Display final value
    cout << "Final value: " << a << endl;

    // End program
    return 0;
}
