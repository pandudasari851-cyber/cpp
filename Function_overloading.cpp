#include<iostream>
using namespace std;
class Sum
{
	public:
		 void add(int a,int b)
		 {
		 	cout<<"int Sum="<<a+b<<endl;
		 }
		 void add(int a,float b)
		 {
		 	cout<<"mixed Sum="<<a+b<<endl;
		 }
		 void add(float a,float b)
		 {
		 	cout<<"Float Sum="<<a+b<<endl;
		 }
		 void add(double a,double b)
		 {
		 	cout<<"double Sum="<<a+b<<endl;
		 }
		 
		 
};
int main()
{
	Sum s;
	s.add(10,20);
	s.add(10,2.5f);
	s.add(5.9f,4.5f);
	s.add(10.80,5.9);
	return 0;
}
