#include <iostream>
using namespace std;

class Base {
public:
    void NonVirtual() {
        cout << "Base NonVirtual called.\n";
    }
    virtual void Virtual() {
        cout << "Base Virtual called.\n";
    }
};
class Derived : public Base {
public:
    void NonVirtual() {
        cout << "Derived NonVirtual called.\n";
    }
    void Virtual() {
        cout << "Derived Virtual called.\n";
    }
};

int main() {
    Base* bBase = new Base();
    Base* bDerived = new Derived();

    bBase->NonVirtual();
    bBase->Virtual();
    bDerived->NonVirtual();
    bDerived->Virtual();
}