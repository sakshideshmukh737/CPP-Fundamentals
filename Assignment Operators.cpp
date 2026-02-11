/* 
This program demonstrates compound assignment operators in C++.
It updates the value of a variable using += and -= and displays the results.
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;

    a += 5;
    cout << "a += 5: " << a << endl;

    a -= 3;
    cout << "a -= 3: " << a << endl;

    return 0;
}
