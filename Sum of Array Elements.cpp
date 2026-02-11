/* 
This program calculates the sum of elements in an array.
It uses a for-loop to iterate through the array and accumulate the total.
*/

#include <iostream>
using namespace std;

int main() {
// Initialize array with 5 elements
    int a[5] = {1, 2, 3, 4, 5};

// Initialize sum variable
    int sum = 0;

// Loop through array elements
    for (int i = 0; i < 5; i++) {
// Add current element to sum
sum += a[i];
    }

// Display sum of array elements
    cout << "Sum = " << sum;

// End program
    return 0;
}
