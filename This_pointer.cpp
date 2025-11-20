#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length,breadth;
	public:
		void input(int length,int breadth)
		{
			this->length=length;
			this->breadth=breadth;
		}
		void area()
		{
			cout<<"Area="<<length*breadth;
		}
};
int main()
{
	Rectangle r;
	r.input(10,20);
	r.area();
}
