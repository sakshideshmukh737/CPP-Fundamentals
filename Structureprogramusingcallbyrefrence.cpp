#include <iostream>
using namespace std;

struct Numbers { int a, b; };

void add(Numbers &n) { n.a += 1; cout << "Sum = " << n.a + n.b << endl; }

int main() {
    Numbers n;
    cout << "Enter 2 numbers: ";
    cin >> n.a >> n.b;
    // call by reference
    add(n);  
    cout << "First number after function = " << n.a << endl;
    return 0;
}
