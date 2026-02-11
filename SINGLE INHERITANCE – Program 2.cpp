#include <iostream>
using namespace std;

// Base class
class A {
public:
    void printA() {
        cout << "Class A" << endl;
    }
};

// Derived class
class B : public A {
public:
    void printB() {
        cout << "Class B" << endl;
    }
};

int main() {
    // Object of derived class
    B obj;

    // Access base class function
    obj.printA();

    // Access derived class function
    obj.printB();

    return 0;
}
