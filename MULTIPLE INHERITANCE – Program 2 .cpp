#include <iostream>
using namespace std;

// Base class X
class X {
public:
    void showX() {
        cout << "Class X" << endl;
    }
};

// Base class Y
class Y {
public:
    void showY() {
        cout << "Class Y" << endl;
    }
};

// Derived class Z inherits X and Y
class Z : public X, public Y {
public:
    void showZ() {
        cout << "Class Z" << endl;
    }
};

int main() {
    // Create object of Z
    Z obj;

    // Call functions of X, Y, and Z
    obj.showX();
    obj.showY();
    obj.showZ();

    return 0;
}
