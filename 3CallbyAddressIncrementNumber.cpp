#include <iostream>
using namespace std;

// Increment value using pointer
void increment(int *x) {
    (*x)++;             // Dereference then increment
}

int main() {
    int a = 10;

    increment(&a);      // Address passed

    cout << a;          // Output: 11

    return 0;
}
