#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"show o class A"<<endl;
		}
};
class B
{
	public:
		void show()
		{
			cout<<"show of class B"<<endl;
		}
};
class C: public A,public B
{
	public:
		void showC()
		{
			cout<<"show of class C"<<endl;
		}
};
int main()
{
	C c;
	c.showC();
	c.A::show();
	c.B::show();
	return 0;
}
