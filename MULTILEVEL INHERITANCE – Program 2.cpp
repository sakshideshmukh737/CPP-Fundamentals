/* 
This program demonstrates multilevel inheritance in C++.
Class C inherits from B, which inherits from A, allowing access to their functions.
*/

#include <iostream>
using namespace std;

// Base class
class A {
    // Function of class A
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

// Derived from A
class B : public A {
    // Function of class B
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

// Derived from B
class C : public B {
    // Inherits all public members from B and A
};

int main() {
    // Create object of class C
    C obj;

    // Call function from class A
    obj.showA();

    // Call function from class B
    obj.showB();

    // End program
    return 0;
}
