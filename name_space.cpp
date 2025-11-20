using namespace std;
#include<iostream>
namespace one
{
	void sample()
	{
		int a=10;
		cout<<a<<endl;
	}
}
namespace two
{
	void sample()
	{
		string s="ABCD";
		cout<<s;
	}
}
int main()
{
	one::sample();
	two::sample();
	return 0;
}

