#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
    int rollNO;
public:
    void setData(string n, int a, int r) {
        name = n;
        age = a;
        rollNO = r;
    }
    void display() {
        displayPerson();
        cout << "Roll No: " << rollNO << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Manu", 2, 5);
    s1.display();
}
