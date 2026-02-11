#include <iostream>
using namespace std;

struct Numbers {
    int num1;
    int num2;
    int sum() {
        return num1 + num2;  // function to add
    }
};

int main() {
    Numbers n;

    // Input commands
    cout << "Enter first number: ";
    cin >> n.num1;

    cout << "Enter second number: ";
    cin >> n.num2;

    // Display result
    cout << "Sum = " << n.sum() << endl;

    return 0;
}
