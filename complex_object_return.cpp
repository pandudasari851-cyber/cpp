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
		Complex add(Complex c2)
		{
			Complex temp;
			temp.real=real+c2.real;
			temp.imag=imag+c2.imag;
			return temp;
		}  
		void show()
		{
			cout<<real<<"+"<<imag<<"i";
		}
};
int main()
{
	Complex c1,c2,c3;
	c1.get();
	c2.get();
	c3=c1.add(c2);
	c3.show();
	return 0;
}
