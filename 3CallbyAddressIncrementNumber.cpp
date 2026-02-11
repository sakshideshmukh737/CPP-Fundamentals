/* 
This program increases the value of a variable using a pointer in C++.
The function directly modifies the original variable by accessing its memory address.
*/

#include <iostream>
using namespace std;

// Increment value using pointer
void increment(int *x) {
 // Dereference then increment
    (*x)++;            
}

int main() {
    int a = 10;
// Address passed
    increment(&a);      

    cout << a;          
// Output: 11
    return 0;
}
#include <iostream>
using namespace std;

// Increment value using pointer
void increment(int *x) {
// Dereference then increment
    (*x)++;            
}

int main() {
    int a = 10;
// Address passed
    increment(&a);      

    cout << a;          
// Output: 11
    return 0;
} 