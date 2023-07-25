#include<bits/stdc++.h>
using namespace std;
//default constructor A(),parameterised constructor A(int a,int b),copy constructor
class A
{
	public:
		A()
		{
			cout<<"Hii"<<endl;
		}
		int a,b;
		A(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		//copy constructor
		A(A &obj)
		{
			this->a=obj.a;
			this->b=obj.b;
		}
		void display()
		{
			cout<<this->a<<" "<<this->b<<endl;
		}
	~A()//destructor(tilde symbol) is automatically called at the end of the program
	{
		cout<<"Bye"<<endl;
	}
};
int main()
{
	A obj1;
	A obj2(1,2);
	A obj3(obj2);
	obj2.display();//displays the parameterised constructor values
	obj3.display();//displays the copy constructor values
}