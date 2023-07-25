#include<bits/stdc++.h>
using namespace std;
//this pointer in cpp is self in python which refers to object
class A
{
	public:
		int a,b;
		A(int a,int b)
		{
			this->a=a;//this refers to object obj
			this->b=b;
		}
		void display()
		{
			cout<<this->a<<" "<<this->b;
		}
};
int main()
{
	A obj(10,20);
	cout<<obj.a<<" "<<obj.b<<endl;
	obj.display();
}