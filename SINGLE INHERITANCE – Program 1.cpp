/* 
This program demonstrates single inheritance in C++.
The Child class inherits from the Parent class, allowing access to its functions.
*/

#include <iostream>
using namespace std;

// Parent class
// Contains a function show() that prints "Parent class"
class Parent {
public:
// Display message for Parent class
    void show() {
        cout << "Parent class" << endl;
    }
};

// Child class inherits Parent
// Contains a function display() that prints "Child class"
class Child : public Parent {
public:
// Display message for Child class
    void display() {
        cout << "Child class" << endl;
    }
};

int main() {
// Create object of Child class
    Child c;

// Call function from Parent class
    c.show();

// Call function from Child class
    c.display();

// End program
    return 0;
}
