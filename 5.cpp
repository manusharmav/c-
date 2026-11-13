#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() {
        cout << "Processing payment..." << endl;
    }
};

class CreditCard : public Payment {
public:
    void pay() override {
        cout << "Paid using Credit Card" << endl;
    }
};

class UPI : public Payment {
public:
    void pay() override {
        cout << "Paid using UPI" << endl;
    }
};

class NetBanking : public Payment {
public:
    void pay() override {
        cout << "Paid using Net Banking" << endl;
    }
};

int main() {
    Payment* p;
    
    CreditCard cc;
    UPI u;
    NetBanking nb;

    p = &cc;
    p->pay();

    p = &u;
    p->pay();

    p = &nb;
    p->pay();

    return 0;
}