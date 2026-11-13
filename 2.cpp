#include <iostream>
#include <typeinfo>
using namespace std;

class Base {
public:
    virtual void f() {}
};

class Derived1 : public Base { };

class Derived2 : public Base { };

int main() {
    Base* b, baseob;
    Derived1 d1;
    Derived2 d2;

    b = &baseob;
    cout << typeid(*b).name() << endl;

    b = &d1;
    cout << typeid(*b).name() << endl;

    b = &d2;
    cout << typeid(*b).name() << endl;

    return 0;
}
