#include<iostream>
using namespace std;
class Demo
{
	private:
		int x;
		public:
		void get()
		{
			x=45;
		}
		friend void sum(Demo &d);
};
void sum(Demo &d)
{
	int y=10;
	d.x=80;
	cout<<d.x+y;
}
int main()
{
	Demo d;
	d.get();
	sum(d);
	return 0;
}
