/* 
This program demonstrates multiple inheritance in C++.
Class C inherits from both A and B, allowing access to functions from both base classes.
*/

#include <iostream>
using namespace std;

// First base class
class A {
    // Function of class A
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

// Second base class
class B {
    // Function of class B
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

// Derived class inherits from A and B
class C : public A, public B {
    // Inherits all public members from A and B
};

int main() {
    // Create object of derived class C
    C obj;

    // Call function from class A
    obj.showA();

    // Call function from class B
    obj.showB();

    // End program
    return 0;
}
