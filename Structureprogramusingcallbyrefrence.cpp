/* 
This program demonstrates using a struct with a function that receives it by reference.
It updates a value via reference and calculates the sum of the struct members.
*/

#include <iostream>
using namespace std;
// Define struct Numbers with two integers
struct Numbers { 
    int a, b; 
};

// Function that takes struct by reference and modifies value
void add(Numbers &n) { 
// Increment first member by 1
    n.a += 1; 
// Display sum of struct members
    cout << "Sum = " << n.a + n.b << endl; 
}

int main() {
// Create object of Numbers struct
    Numbers n;

// Input two numbers from user
    cout << "Enter 2 numbers: ";
    cin >> n.a >> n.b;

// Call function by passing struct by reference
    add(n);  

// Display updated first number
    cout << "First number after function = " << n.a << endl;

// End program
    return 0;
}
