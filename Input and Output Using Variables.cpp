/* 
This program takes two integer inputs from the user.
Then displays the entered values using cout.
*/

#include <iostream>
using namespace std;

int main() {
    // Declare two integer variables
    int x, y;

    // Prompt user to enter two numbers
    cout << "Enter two numbers: ";
    // Read values from user
    cin >> x >> y;

    // Display value of x
    cout << "x = " << x << endl;

    // Display value of y
    cout << "y = " << y << endl;

    // End program
    return 0;
}
