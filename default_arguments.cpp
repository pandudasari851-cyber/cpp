#include<iostream>
using namespace std;
class Sample
{
	
	public:
		 int big(int x=50,int y=30)
		{
			return (x>y?x:y);
		}
};
int main()
{
	Sample s;
	cout<<"big (without default argument)="<<s.big(10,20)<<endl;
	cout<<"big (with default arguments)="<<s.big();

	return 0;
}
