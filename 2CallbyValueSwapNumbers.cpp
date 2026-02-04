#include <iostream>
using namespace std;

// Function to swap values (call by value)
void swap(int a, int b) {
    int temp;           // Temporary variable
    temp = a;
    a = b;
    b = temp;           // Swap happens only locally
}

int main() {
    int x = 3, y = 5;

    swap(x, y);         // Passing copies of x and y

    // Values do not change in main()
    cout << x << " " << y;

    return 0;
}
