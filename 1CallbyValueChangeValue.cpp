#include <iostream>      // Header file for input/output
using namespace std;

// Function definition
// int x receives a COPY of variable a
void change(int x) {
    x = 100;            // Changes only the local copy
}

int main() {
    int a = 10;         // Original variable

    change(a);          // Passing value of a (copy)

    // Original value remains unchanged
    cout << "Value of a: " << a;

    return 0;           // End of program
}



