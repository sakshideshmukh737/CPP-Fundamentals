/* 
This program demonstrates using a struct with a function that receives its address.
It updates a value via a pointer and calculates the sum of the struct members.
*/

#include <iostream>
using namespace std;

// Define struct Numbers with two integers
struct Numbers { 
    int a, b; 
};

// Function that takes struct pointer and modifies value
void add(Numbers *n) { 
// Increment second member by 2
    n->b += 2; 
// Display sum of struct members
    cout << "Sum = " << n->a + n->b << endl; 
}

int main() {
// Create object of Numbers struct
    Numbers n;

// Input two numbers from user
    cout << "Enter 2 numbers: ";
    cin >> n.a >> n.b;

// Call function by passing address of struct
    add(&n);  

// Display updated second number
    cout << "Second number after function = " << n.b << endl;

// End program
    return 0;
}
