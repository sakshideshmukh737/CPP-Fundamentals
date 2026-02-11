#include <iostream>
using namespace std;

// Function receives address using pointer
void change(int *x) {
    *x = 100;           // Dereferencing pointer to change value
}

int main() {
    int a = 10;

    change(&a);         // Passing address of a

    // Original value updated
    cout << "Value of a: " << a;

    return 0;
}
