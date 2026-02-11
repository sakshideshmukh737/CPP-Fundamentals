#include <iostream>
using namespace std;

struct myself {
    string name;
    int id;
    double salary;
};

int main() {
    myself s;

    // Commands for user input
    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter ID: ";
    cin >> s.id;

    cout << "Enter salary: ";
    cin >> s.salary;

    // Display the values
    cout << s.name << endl << s.id << endl << s.salary << endl;

    return 0;
}
