#include <iostream>
using namespace std;

struct Numbers { int a, b; };

void add(Numbers n) { cout << "Sum = " << n.a + n.b << endl; }

int main() {
    Numbers n;
    cout << "Enter 2 numbers: ";
    cin >> n.a >> n.b;
    add(n);  // call by value
    return 0;
}
