/* 
This program calculates the sum of two numbers using a structure.
The sum function works on the members of the structure object.
*/

#include <iostream>
using namespace std;

struct Numbers {
    int num1;
    int num2;
    int sum() {
// function to add
        return num1 + num2;  
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
