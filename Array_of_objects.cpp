#include<iostream>
using namespace std;
class Employee
{
	private:
		int eid;
		string name;
	public:
		 void get()
		 {
		 	cout<<"Enter id and name";
		 	cin>>eid>>name;
		 }
		 void show()
		 {
		 	cout<<"Eid="<<eid<<endl;
		 	cout<<"Name="<<name<<endl;
		 }
};
int main()
{
	Employee e[5];
	for(int i=0;i<3;i++)
	{
		e[i].get();
	}
	for(int i=0;i<3;i++)
	{
		e[i].show();
	}
	return 0;
}
