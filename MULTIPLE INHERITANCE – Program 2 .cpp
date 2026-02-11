/* 
This program demonstrates multiple inheritance in C++.
Class Z inherits from base classes X and Y, allowing access to functions from both.
*/

#include <iostream>
using namespace std;

// Base class X
// Function that prints "Class X"
class X {
public:
    // Display message for class X
    void showX() {
        cout << "Class X" << endl;
    }
};

// Base class Y
// Function that prints "Class Y"
class Y {
public:
    // Display message for class Y
    void showY() {
        cout << "Class Y" << endl;
    }
};

// Derived class Z inherits from X and Y
// Function that prints "Class Z"
class Z : public X, public Y {
public:
    // Display message for class Z
    void showZ() {
        cout << "Class Z" << endl;
    }
};

int main() {
    // Create object of class Z
    Z obj;

    // Call function from class X
    obj.showX();

    // Call function from class Y
    obj.showY();

    // Call function from class Z
    obj.showZ();

    // End program
    return 0;
}
