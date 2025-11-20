#include<iostream>
using namespace std;
class Base
{
	public:
		void show()
		{
			cout<<"Show() of base class"<<endl;
		}
};
class Derived: public Base
{
	public:
		void print()
		{
			cout<<"print() of derived class"<<endl;
		}
};
int main()
{
	Derived d,*dptr;
	dptr=&d;
	dptr->show();
	dptr->print();
	return  0;
}
