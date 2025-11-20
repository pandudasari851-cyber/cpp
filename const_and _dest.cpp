#include <iostream>
using namespace std;
class Sample {
private:
    int rollNo;
    string name;
public:
    Sample(int r, string n) {
        rollNo = r;
        name = n;
        cout << "Constructor called for " << name << endl;
    }
    void show() {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
    ~Sample() {
        cout << "Destructor called for " << name << endl;
    }
};
int main() {
    Sample s1(101, "Abhinay");
    s1.show();
    return 0;
}

