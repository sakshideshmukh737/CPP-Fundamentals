/* 
This program calculates the sum of first n natural numbers using a while loop.
It takes input from the user and accumulates the sum iteratively.
*/

#include <iostream>
using namespace std;

int main() {
// Declare variables for number, sum, and counter
    int n, sum = 0, i = 1;

// Input number from user
    cout << "Enter a number: ";
    cin >> n;

// Loop from 1 to n
    while(i <= n) {
// Add current number to sum
        sum += i;
// Increment counter
        i++;
    }

// Display the total sum
    cout << "Sum = " << sum << endl;

// End program
    return 0;
}
