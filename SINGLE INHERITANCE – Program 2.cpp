/* 
This program demonstrates single inheritance in C++.
Class B inherits from class A, allowing access to both base and derived class functions.
*/

#include <iostream>
using namespace std;

// Base class
// Contains a function printA() that prints "Class A"
class A {
public:
// Display message for class A
    void printA() {
        cout << "Class A" << endl;
    }
};

// Derived class
// Contains a function printB() that prints "Class B"
class B : public A {
public:
// Display message for class B
    void printB() {
        cout << "Class B" << endl;
    }
};

int main() {
// Create object of derived class B
    B obj;

// Call function from base class A
    obj.printA();

// Call function from derived class B
    obj.printB();

// End program
    return 0;
}
