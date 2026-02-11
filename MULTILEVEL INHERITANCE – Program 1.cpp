/* 
This program demonstrates multilevel inheritance in C++.
Class C inherits from B, which inherits from A, allowing access to their functions.
*/

#include <iostream>
using namespace std;

// Base class
class A {
public:
    // Function of class A
    void showA() {
        cout << "Class A" << endl;
    }
};

// Derived from A
class B : public A {
public:
    // Function of class B
    void showB() {
        cout << "Class B" << endl;
    }
};

// Derived from B
class C : public B {
    // Inherits all public members of B and A
};

int main() {
    // Create object of class C
    C obj;

    // Access function from class A
    obj.showA();

    // Access function from class B
    obj.showB();

    // End program
    return 0;
}
