/* 
This program swaps the values of two variables using references in C++.
The function directly modifies the original variables without using pointers.
*/

#include <iostream>
using namespace std;

// Swap function using references
void swap(int &a, int &b) {
    int temp;
    temp = a;
// Swap affects original values
    a = b;
    b = temp;          
}

int main() {
    int x = 3, y = 5;
// Variables passed by reference
    swap(x, y);         

// Values are swapped
    cout << x << " " << y;

    return 0;
} 