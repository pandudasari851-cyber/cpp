#include<iostream>
using namespace std;
class Box
{
	private:
		int length,breadth,height;
	public:
		int volume(int ,int ,int );
};
int Box :: volume(int l,int b, int h)
{
	length=l,breadth=b,height=h;
	return (length*breadth*height);
}
int main()
{
	Box b;
	cout<<"volume of box= "<<b.volume(10,20,30);
	return 0;
}
