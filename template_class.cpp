#include<iostream>
using namespace std;
template <class T>
class Sample
{
	private:
		T n;
	public:
		void get()
		{
			cout<<"Enter n value:";
			cin>>n;
		}
		void show()
		{
			cout<<"n= "<<n<<endl;
		}
};
int main()
{
	Sample <int> s1;
	s1.get();
	s1.show();
	Sample <char> s2;
	s2.get();
	s2.show();
	Sample <float> s3;
	s3.get();
	s3.show();
	return 0;
}
