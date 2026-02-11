/* 
This program calculates the area of a circle using float and double variables.
It demonstrates floating-point arithmetic and displays the result.
*/

#include <iostream>
using namespace std;

int main() {
    // Pi value
    float pi = 3.14f;

    // Circle radius
    double radius = 5.5;

    // Calculate area
    double area = pi * radius * radius;

    // Display area
    cout << "Area of circle = " << area;

    // End program
    return 0;
}
