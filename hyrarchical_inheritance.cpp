#include<iostream>
using namespace std;
class A
{
	public:
		
		A()
		{
			cout<<" Member function of A"<<endl;
		}
		~A()
		{
			cout<<" Member function of A"<<endl;
		}
};
class B: public A
{
	public:
		
		B()
		{
			
			cout<<" Member function of B"<<endl;
		}
		~B()
		{
			cout<<" Member function of B"<<endl;
		}
};
class C:public A
{
	public:
		
		C()
		{
			
			cout<<" Member function of C"<<endl;
		}
		~C()
		{
			cout<<" Member function of C"<<endl;
		}
};
int main()
{
	B b;
	C c;
	return 0;
}

