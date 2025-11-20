#include<iostream>
using namespace std;
class Complex
{
	private:
		int real,imag;
	public:
		void get()
		{
			cout<<"Enter real and imaginary values";
			cin>>real>>imag;
		}
		void add(Complex c2)
		{
			cout<<real+c2.real<<"+"<<imag+c2.imag<<"i";
		}
};
int main()
{
	Complex c1,c2;
	c1.get();
	c2.get();
	c1.add(c2);
	return 0;
}
