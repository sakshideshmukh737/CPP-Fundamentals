#include <iostream>
using namespace std;

// Swap function using references
void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;           // Swap affects original values
}

int main() {
    int x = 3, y = 5;

    swap(x, y);         // Variables passed by reference

    // Values are swapped
    cout << x << " " << y;

    return 0;
}
