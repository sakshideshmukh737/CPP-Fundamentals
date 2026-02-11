/* 
This program prints a right-angled triangle star pattern.
It uses nested loops to display the pattern for a specified number of rows.
*/

#include <iostream>
using namespace std;

// Number of rows in the triangle
int main() {
// Initialize number of rows
    int rows = 5;

// Outer loop for each row
    for(int i = 1; i <= rows; i++) {
// Inner loop to print stars in a row
        for(int j = 1; j <= i; j++) {
// Print a star
            cout << "* ";
        }
// Move to the next line after each row
        cout << endl;
    }

// End program
    return 0;
}
