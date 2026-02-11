#include <iostream>
using namespace std;

// Parent class
class Parent {
public:
    void show() {
        // Function of Parent class
        cout << "Parent class" << endl;
    }
};

// Child class inherits Parent
class Child : public Parent {
public:
    void display() {
        // Function of Child class
        cout << "Child class" << endl;
    }
};

int main() {
    // Create object of Child class
    Child c;

    // Call Parent class function
    c.show();

    // Call Child class function
    c.display();

    return 0;
}
