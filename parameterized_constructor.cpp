#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length,breadth;
	public:
		Rectangle(int l,int b)
		{
			length=l,breadth=b;
		}
		void area()
		{
			cout<<"Area="<<length*breadth;
		}
};
int main()
{
	Rectangle r(20,40);
	r.area();
	return 0;
}
