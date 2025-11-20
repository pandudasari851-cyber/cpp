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
		void area()
		{
			cout<<"Area="<<length*breadth;
		}
};
int main()
{
	Rectangle r;
	r.area();
	return 0;
}
