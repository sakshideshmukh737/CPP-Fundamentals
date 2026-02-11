/* 
This program demonstrates the use of a struct in C++.
It takes user input for name, ID, and salary and displays the values.
*/

#include <iostream>
#include <string>
using namespace std;

// Define struct myself
struct myself {
// Name of person
    string name;
// ID of person
    int id;
// Salary of person
    double salary;
};

int main() {
// Create object of struct
    myself s;

// Input name from user
    cout << "Enter name: ";
    cin >> s.name;

// Input ID from user
    cout << "Enter ID: ";
    cin >> s.id;

// Input salary from user
    cout << "Enter salary: ";
    cin >> s.salary;

// Display name, ID, and salary
    cout << s.name << endl << s.id << endl << s.salary << endl;

// End program
    return 0;
}
