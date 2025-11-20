#include<iostream>
using namespace std;
int fact(int);
int fact(int n)
{
	if (n==1)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int n,r;
	cout<<"Enter the number:";
	cin>>n;
	r=fact(n);
	cout<<"The Factorial of the entered number is = "<<r;
	return 0;
}
