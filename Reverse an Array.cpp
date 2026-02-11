/* 
This program demonstrates how to print elements of an array in reverse order.
It uses a for-loop starting from the last index to the first.
*/

#include <iostream>
using namespace std;

int main() {
// Initialize array with 5 elements
    int a[5] = {1, 2, 3, 4, 5};

// Loop from last element to first
    for (int i = 4; i >= 0; i--) {
// Print current element
        cout << a[i] << " ";
    }

// End program
    return 0;
}
