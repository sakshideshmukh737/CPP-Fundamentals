/* 
This program swaps the values of two variables using pointers.
The function directly modifies the original variables by accessing their memory addresses.
*/

#include <iostream>
using namespace std;

// Swap function using pointers
void swap(int *a, int *b) {
    int temp;
// Store value at address a
    temp = *a;  
// Assign value at address b to a
    *a = *b;  
// Assign temp to b
    *b = temp;          
}

int main() {
    int x = 3, y = 5;  
// Passing addresses of x and y
    swap(&x, &y);      

// Values are swapped
    cout << x << " " << y;

    return 0;           
}
