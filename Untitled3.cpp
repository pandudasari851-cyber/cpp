#include<iostream>
using namespace std;
class Box
{
	private:
		int length,breadth,height;
		int volume(int l,int b,int h)
		{
			length=l,breadth=b,height=h;
			return length*breadth*height;
		}
    public:
    	int v();
    	
};
int Box:: v()
{
    return (volume(1,2,3));
}
int main()
{
	Box b;
	cout<<"volume of box= "<<b.v();
	return 0;
}
