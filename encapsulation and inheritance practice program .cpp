//simple inheritance
#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void display() {
        cout << "Child class" << endl;
    }
};

int main() {
    Child obj;
    obj.show();
    obj.display();
    return 0;
}




//multipal
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    return 0;
}


//multilevel inheritance 
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public B {
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    return 0;
}










//single inheritance 

#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "Person" << endl;
    }
};

class Student : public Person {
public:
    void showStudent() {
        cout << "Student" << endl;
    }
};

int main() {
    Student s;
    s.showPerson();
    s.showStudent();
    return 0;
}



//multipal inheritance 
#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "Person" << endl;
    }
};

class Student {
public:
    void showStudent() {
        cout << "Student" << endl;
    }
};

class Intern : public Person, public Student {
};

int main() {
    Intern i;
    i.showPerson();
    i.showStudent();
    return 0;
}


//multilevel inheritance 
#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "Person" << endl;
    }
};

class Student : public Person {
public:
    void showStudent() {
        cout << "Student" << endl;
    }
};

class Graduate : public Student {
};

int main() {
    Graduate g;
    g.showPerson();
    g.showStudent();
    return 0;
}
