#include <iostream>
using namespace std;

// Base class
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

// Derived from A
class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

// Derived from B
class C : public B {
};

int main() {
    // Object of class C
    C obj;

    // Access functions from A and B
    obj.showA();
    obj.showB();

    return 0;
}
