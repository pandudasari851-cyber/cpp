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
		void add(Complex c1,Complex c2)
		{
			real=c1.real+c2.real;
			imag=c1.imag+c2.imag;
			cout<<real<<"+"<<imag<<"i";
		}
};
int main()
{
	Complex c1,c2,c3;
	c1.get();
	c2.get();
	c3.add(c1,c2);
	return 0;
}
