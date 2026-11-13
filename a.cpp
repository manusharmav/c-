#include <iostream>
using namespace std;

// Transaction class
class Transaction {
public:
    double amount;

    Transaction(double amt) {
        amount = amt;
    }
};

// Base class
class Payment {
protected:
    Transaction t;   // Composition

public:
    Payment(double amt) : t(amt) {}

    virtual void pay() {
        cout << "Processing payment..." << endl;
    }

    virtual ~Payment() {}
};

// Derived class: CreditCard
class CreditCard : public Payment {
public:
    CreditCard(double amt) : Payment(amt) {}

    void pay() override {
        double total = t.amount + 20; // processing fee
        cout << "Credit Card Payment: Rs." << total << endl;
    }
};

// Derived class: UPI
class UPI : public Payment {
public:
    UPI(double amt) : Payment(amt) {}

    void pay() override {
        double total = t.amount - 10; // cashback
        cout << "UPI Payment: Rs." << total << endl;
    }
};

// Derived class: Cash
class Cash : public Payment {
public:
    Cash(double amt) : Payment(amt) {}

    void pay() override {
        cout << "Cash Payment: Rs." << t.amount << endl;
    }
};

int main() {
    Payment *p1, *p2, *p3;

    p1 = new CreditCard(1000);
    p2 = new UPI(1000);
    p3 = new Cash(1000);

    p1->pay();
    p2->pay();
    p3->pay();

    delete p1;
    delete p2;
    delete p3;

    return 0;
}