#include<iostream>
using namespace std;
class Box
{
	private:
		int length,breadth,height;
	public:
		int area(int l,int b,int h)
		{
			length=l,breadth=b,height=h;
			return length*breadth*height;
		}
};
int main()
{
	Box b;
	cout<<"volume of box= "<<b.area(5,4,3);
	return 0;
}
