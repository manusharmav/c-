#include <iostream>
using namespace std;

class Comp {
    float real;
    float imag;

public:
    Comp(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    friend Comp operator+(Comp c1, Comp c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Comp operator+(Comp c1, Comp c2) {
    Comp temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Comp c1(3.5, 2.5), c2(1.5, 4.5);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    Comp c3 = c1 + c2;
    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}