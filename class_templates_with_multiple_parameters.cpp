#include<iostream>
using namespace std;
template <class T1,class T2>
class Sample
{
	private:
		T1 x;
		T2 y;
	public:
		void get()
		{
			cin>>x>>y;
		}
		void show()
		{
			cout<<"x= "<<x<<endl;
			cout<<"y= "<<y<<endl;
		}
};
int main()
{
	Sample <int,float> s1;
	cout<<"Enter int , float value:";
	s1.get();
	s1.show();
	Sample <char,int> s2;
	cout<<"Enter char , int value:";
	s2.get();
	s2.show();
	Sample <float,char> s3;
	cout<<"Enter float, char value:";
	s3.get();
	s3.show();
	return 0;
}
