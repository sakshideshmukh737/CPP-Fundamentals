#include <iostream>
using namespace std;

// int &x is a reference to variable a
void change(int &x) {
    x = 100;            // Modifies original variable
}

int main() {
    int a = 10;

    change(a);          // Passing variable directly

    // Value of a is changed
    cout << "Value of a: " << a;

    return 0;
}
