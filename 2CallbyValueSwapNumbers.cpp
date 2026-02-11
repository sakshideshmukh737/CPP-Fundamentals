/* 
This program attempts to swap two variables using call by value in C++.
Since the function works on copies, the original variables in main() remain unchanged.
*/

#include <iostream>
using namespace std;

// Function to swap values (call by value)
void swap(int a, int b) {
// Temporary variable
    int temp;           
    temp = a;
    a = b;
    b = temp;          
}

int main() {
    int x = 3, y = 5;
// Passing copies of x and y
    swap(x, y);         

// Values do not change in main()
    cout << x << " " << y;

    return 0;
} 