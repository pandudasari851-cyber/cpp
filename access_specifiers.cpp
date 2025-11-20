#include <iostream>
using namespace std;
class Sample {
private:   
    int rollNo;
public:    
    string name;

    Sample(string n, int r) {
        name = n;
        rollNo = r;
    }

    void show() {
        cout << "Roll No (Private using member function): " << rollNo << endl;
    }
};
int main() {
    Sample s("Abhinay", 101);
    cout << "Student Name (public): " << s.name << endl;
    s.show();
    return 0;
}

