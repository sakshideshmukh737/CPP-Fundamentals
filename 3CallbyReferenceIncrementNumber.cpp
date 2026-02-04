#include <iostream>
using namespace std;

// Function increments original variable
void increment(int &x) {
    x++;                // Increases original value
}

int main() {
    int a = 10;

    increment(a);       // Reference passed

    cout << a;          // Output: 11

    return 0;
}
