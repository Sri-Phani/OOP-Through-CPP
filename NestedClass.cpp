#include<bits/stdc++.h>
using namespace std;
class A
{
	public:
		int a=10,b=20;
		A()
		{
			B obj2(11,22);
			obj2.display();
		}
		class C//nested with class A public
		{
			public:
				int a,b;
				C(int a,int b)
				{
					this->a=a;
					this->b=b;
				}
				void display()
				{
					cout<<this->a<<" "<<this->b<<endl;
				}
		};
	private:
		class B//nested with class A private
		{
			public:
				int a,b;
				B(int a,int b)
				{
					this->a=a;
					this->b=b;
				}
				void display()
				{
					cout<<this->a<<" "<<this->b<<endl;
				}
		};
};
//nested private class caling using another friend class
class D
{
	public:
		friend class E;
	private:
		class F
		{
			public:
				int a,b;
				F(int a,int b)
				{
					this->a=a;
					this->b=b;
				}
				void display()
				{
					cout<<this->a<<" "<<this->b;
				}
		};
};
class E
{
	public:
		E()
		{
			D::F obj5(10,20);
			obj5.display();
		}
};
int main()
{
	A::C obj(1,2);
	obj.display();
	A obj1;
	E obj4;
}