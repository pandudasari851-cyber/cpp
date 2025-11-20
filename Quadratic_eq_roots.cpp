#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,d,r1,r2;
	cout<<"Enter the values of a,b and c :";
	cin>>a>>b>>c;
	d=(b*b-4*a*c);
	if(d==0)
	{
		r1=-b/(2*a);
		r2=-b/(2*a);
		cout<<"Roots are real and equal"<<endl;
		cout<<"The roots are r1= "<<r1<<" , r2= "<<r2;
	}
	else if(d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
	    r2=(-b-sqrt(d))/(2*a);
	    cout<<"Roots are real and distinct"<<endl;
		cout<<"The roots are r1= "<<r1<<" , r2= "<<r2;
	}
	else
	{
		r1=-b/(2*a);
		r2=-(sqrt(-d))/(2*a);
		cout<<"Roots are imaginary"<<endl;
		cout<<"The real part r1= "<<r1<<" ,imaginary part r2= "<<r2;
		
	}
	return 0;
}
