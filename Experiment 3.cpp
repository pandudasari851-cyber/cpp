int main() {
    cout << "\n--- Single Inheritance ---" << endl;
    B b;
    b.displayA();
    b.displayB();

    cout << "\n--- Multiple Inheritance ---" << endl;
    Z z;
    z.displayX();
    z.displayY();
    z.displayZ();

    cout << "\n--- Multi-level Inheritance ---" << endl;
    GrandChild gc;
    gc.displayParent();
    gc.displayChild();
    gc.displayGrandChild();

    cout << "\n--- Hierarchical Inheritance ---" << endl;
    Derived1 d1;
    Derived2 d2;
    d1.displayBase();
    d1.displayDerived1();
    d2.displayBase();
    d2.displayDerived2();

    cout << "\n--- Hybrid Inheritance ---" << endl;
    P p;
    p.displayM();
    p.displayN();
    p.displayO();
    p.displayP();

    return 0;
}
