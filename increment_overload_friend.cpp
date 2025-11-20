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
		friend void operator ++(increment &i);
};
void operator ++(increment &i)
{
	++i.x;
	++i.y;
	++i.z;
}
int main()
{
	increment i;
	i.get();
	++(i);//operator ++(i)
	i.show();
	return 0;
}
