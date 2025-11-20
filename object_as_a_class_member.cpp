 #include<iostream>
 using namespace std;
 class Birth {
 public:
    int dd, mm, YY;
    Birth() {
        dd = 0;
        mm = 0;
        YY = 0;
    }
    void show() {
        cout << "Enter day, month, year: ";
        cin >> dd >> mm >> YY;
        cout << "Date of Birth = " << dd << "-" << mm << "-" << YY << endl;
    }
 };
 class Student {
 public:
    char name[30];
    Birth dob;
    char gender;
    void print() {
        cout << "Enter name and gender: ";
        cin >> name >> gender;
        cout << "Name = " << name << endl;
        cout << "Gender = " << gender << endl;
        dob.show();
    }
};
 int main() {
    Student s;
    s.print();
 }
