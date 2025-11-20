#include<iostream>
using namespace std;
class increment
{
	int x,y,z;
	public:
		void get()
		{
			x=10;
			y=15;
			z=-20;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z;
		}
		void operator ++()
		{
			++x;
			++y;
			++z;
		}
};
int main()
{
	increment i;
	i.get();
	++ i;
	i.show();
	return 0;
}
