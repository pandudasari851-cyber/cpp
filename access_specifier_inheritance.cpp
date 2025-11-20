#include<iostream>
using namespace std;
class A
{
	public:
		int n;
		void get()
		{
			n=3;
		}
};
class B: public A
{
	public:
		void cube()
		{
			get();
			cout<<n*n*n;
		}
};
int main()
{
	B b;
	b.get();
	b.cube();
	return 0;
}
