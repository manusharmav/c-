#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    string city;
    string state;
    int pincode;

    void input() {
        cout << "Enter City: ";
        cin >> city;
        cout << "Enter State: ";
        cin >> state;
        cout << "Enter Pincode: ";
        cin >> pincode;
    }

    void display() {
        cout << "Address: " << city << ", " << state << " - " << pincode << endl;
    }
};

class Student {
private:
    int rollNumber;
    string name;
    Address addr;

public:
    void accept() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        addr.input();
    }

    void display() {
        cout << "\nStudent Details:" << endl;
        cout << "Roll No: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        addr.display();
    }
};

int main() {
    Student s;
    s.accept();
    s.display();
    return 0;
}