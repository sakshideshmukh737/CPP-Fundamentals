/* 
This program demonstrates using a struct with a function that receives it by value.
The function calculates the sum without modifying the original struct members.
*/

#include <iostream>
using namespace std;

// Define struct Numbers with two integers
struct Numbers { 
    int a, b; 
};

// Function that takes struct by value and calculates sum
void add(Numbers n) { 
// Display sum of struct members
    cout << "Sum = " << n.a + n.b << endl; 
}

int main() {
// Create object of Numbers struct
    Numbers n;

// Input two numbers from user
    cout << "Enter 2 numbers: ";
    cin >> n.a >> n.b;

// Call function by passing struct by value
    add(n);  

// End program
    return 0;
}
