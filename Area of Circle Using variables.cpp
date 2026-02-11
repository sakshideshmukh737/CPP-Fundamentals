/* 
This program calculates the area of a circle using a radius.
It multiplies π (3.14) with radius squared and displays the result.
*/

#include <iostream>
using namespace std;

int main() {
    float radius, area;
    radius = 7;
    area = 3.14 * radius * radius;
    cout << "Area = " << area;
    return 0;
}
