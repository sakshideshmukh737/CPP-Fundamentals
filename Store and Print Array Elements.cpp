/* 
This program demonstrates how to print elements of an array in C++.
It uses a for-loop to access and display each element of the array.
*/

#include <iostream>
using namespace std;

int main() {
// Initialize array with 5 elements
    int a[5] = {1, 2, 3, 4, 5};

// Loop through array elements
    for (int i = 0; i < 5; i++) {
// Print current element
        cout << a[i] << " ";
    }

// End program
    return 0;
}
