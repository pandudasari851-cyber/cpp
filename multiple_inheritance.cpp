#include<iostream>
using namespace std;
// Base class A
class A {
    protected:   // Accessible to derived classes, not outside
        void showa() {
            cout << "show() of class A" << endl;
        }
};
// Base class B
class B {
    protected:
        void showb() {
            cout << "show() of class B" << endl;
        }
};
// Derived class C inherits publicly from BOTH A and B
class C : public A, public B {
    public:
        void showc() {
            // Can call showa() because C inherits A publicly,
            showa();
 //  showb() is protected in B 
            showb();

            cout << "show() of class C" << endl;
        }
};

int main() {
    C c;        // Create object of class C
    c.showc();  // Calls showc(), which internally calls showa() and showb()
    return 0;
}


