#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void show()
		{
			cout<<"Show of Base class"<<endl;
		}
};

class Derived: public Base
{
	public:
		 void show()
		{
			cout<<"Show of Derived  class"<<endl;
		}
};
int main()
{
	Base *bptr,b;
	Derived d;
	bptr=&b;
	bptr->show();
	bptr=&d;
	bptr->show();
	return 0;
	
}

