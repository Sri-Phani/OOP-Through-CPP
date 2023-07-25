#include<bits/stdc++.h>
using namespace std;
//diamond shaped inheritance example
class a//virtual base class
{
	public:
		a()
		{
			cout<<"A class"<<endl;
		}
};
//virtual makes parent class constructor call only once even though there are multiple children
class b:virtual public a
{
	public:
		b()
		{
			cout<<"B class"<<endl;
		}
};
class d:virtual public a
{
	public:
		d()
		{
			cout<<"D class"<<endl;
		}
};
class c:public b,public d
{
	public:
		c()
		{
			cout<<"C class"<<endl;
		}
};
int main()
{
	c obj1;
}