#include <iostream>
using namespace std;

// Function returns square of number
int square(int x) {
    return x * x;       // Uses local copy of x
}

int main() {
    int a = 4;

    // Value is passed, result is returned
    cout << square(a);

    return 0;
}
