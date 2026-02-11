#include <iostream>
using namespace std;

struct Numbers { int a, b; };

void add(Numbers *n) { n->b += 2; cout << "Sum = " << n->a + n->b << endl; }

int main() {
    Numbers n;
    cout << "Enter 2 numbers: ";
    cin >> n.a >> n.b;
    // call by address
    add(&n);  
    cout << "Second number after function = " << n.b << endl;
    return 0;
}
