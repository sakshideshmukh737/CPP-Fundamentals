#include <iostream>
using namespace std;

// Swap function using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;          // Value at address a
    *a = *b;            // Assign value at address b
    *b = temp;
}

int main() {
    int x = 3, y = 5;

    swap(&x, &y);       // Passing addresses of x and y

    // Values are swapped
    cout << x << " " << y;

    return 0;
}
