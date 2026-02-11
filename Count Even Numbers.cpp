/* 
This program counts the number of even elements in an integer array.
It uses a for loop and if condition to check each element and display the count.
*/

#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int count = 0;

    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0)
            count++;
    }

    cout << "Even count = " << count;
    return 0;
}
