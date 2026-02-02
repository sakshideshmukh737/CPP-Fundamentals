#include <iostream>
using namespace std;

// Define a class
class Student {
private:
    int rollNo;
    string name;

public:
    // Member function to set values
    void setData(int r, string n) {
        rollNo = r;
        name = n;
    }

    // Member function to display values
    void displayData() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;          // Create an object of the class
    s1.setData(101, "Rahul");
    s1.displayData();

    return 0;
}
