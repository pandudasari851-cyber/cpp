#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length,breadth;
	public:
		Rectangle()
		{
			length=10,breadth=20;
		}
		Rectangle(int v)
		{
			length=v,breadth=v;
		}
		Rectangle(int l,int b)
		{
			length=l,breadth=b;
		}
		void area()
		{
			cout<<"Area="<<length*breadth<<endl;
		}
};
int main()
{
	Rectangle r1;
	Rectangle r2(5);
	Rectangle r3(25,65);
	r1.area();
	r2.area();
	r3.area();
	return 0;
}
