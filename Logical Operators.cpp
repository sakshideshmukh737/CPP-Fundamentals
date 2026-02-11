/* 
This program demonstrates logical operators in C++.
It shows AND (&&), OR (||), and NOT (!) operations.
*/

#include <iostream>
using namespace std;

int main() {
    // Initialize two integer variables
    int a = 5, b = 10;

    // Logical AND: true if both conditions are true
    cout << (a < b && b > 0) << endl;

    // Logical OR: true if at least one condition is true
    cout << (a > b || b > 0) << endl;

    // Logical NOT: negates the condition
    cout << !(a > b) << endl;

    // End program
    return 0;
}
