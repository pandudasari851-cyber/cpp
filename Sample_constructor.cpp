#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length,breadth;
	public:
		Rectangle(int l=10,int b=20)
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
	Rectangle r1(40,50);
	r1.area();
	return 0;
}
