#include<iostream>
using namespace std;
class Demo
{
	private:
		int x;
		void get()
		{
			x=45;
		}
		friend void sum();
};
void sum()
{
	int y=10;
	Demo d;
	d.get();
	cout<<d.x+y;
}
int main()
{
	sum();
	return 0;
}
