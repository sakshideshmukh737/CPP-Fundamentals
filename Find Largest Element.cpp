/* 
This program finds the largest element in an integer array.
It uses a for loop and if condition to compare elements and display the maximum.
*/

#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 25, 5, 40, 15};
    int max = a[0];

    for (int i = 1; i < 5; i++) {
        if (a[i] > max)
            max = a[i];
    }

    cout << "Largest = " << max;
    return 0;
}
