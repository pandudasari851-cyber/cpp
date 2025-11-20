#include<iostream>
using namespace std;
class Sample
{
	
	public:
		inline int big(int x,int y)
		{
			return (x>y?x:y);
		}
};
int main()
{
	Sample s;
	cout<<"big="<<s.big(10,20);
	return 0;
}
