#include<iostream>
using namespace std;
class matrix
{
	int a[10][10],i,j,r,c;
	public:
		void get()
		{
			cout<<"Enter row,column values";
			cin>>r>>c;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					cin>>a[i][j];
				}
			}
		}
		friend void operator +(matrix &m1, matrix &m2);
};
void operator +(matrix &m1, matrix &m2){
	int i,j;
	for(i=0;i<m1.r;i++)
	{
		for(j=0;j<m1.c;j++)
		{
			cout<<m1.a[i][j]+m2.a[i][j]<<"  ";
		}
		cout<<"\n";
	}
}
int main()
{
	matrix m1,m2;
	m1.get();
	m2.get();
	m1+m2;//operator +(m1,m2);
	return 0;
}
