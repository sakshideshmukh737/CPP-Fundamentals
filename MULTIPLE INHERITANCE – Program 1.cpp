#include <iostream>
using namespace std;

// First base class
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

// Second base class
class B {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

// Derived class inherits from A and B
class C : public A, public B {
};

int main() {
    // Object of derived class
    C obj;

    // Call function of class A
    obj.showA();

    // Call function of class B
    obj.showB();

    return 0;
}
