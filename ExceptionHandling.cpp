#include<iostream>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	try
	{
		if(d==0)
		{
			throw "zero division error";
		}
		else
		{
			cout<<"hello";
		}
	}
	catch(const char *s)
	{
		cout<<s;
	}
	catch(...)
	{
		cout<<"Error"<<endl;
	}
	cout<<"\n";
	cout<<"hii";
}