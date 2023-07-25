#include<bits/stdc++.h>
using namespace std;
//friend class and friend methods
class class_name
{
	private:
		int a=10;
	protected:
		int b=20;
	public:
		friend class B;//friending another class
};
class B
{
	public:
		void fun(class_name obj)
		{
			cout<<obj.a<<" "<<obj.b;
		}
};
int main()
{
	class_name obj;
	B obj1;
	obj1.fun(obj);//accessing private and protected instance variables through public class of class_name which is a friend of class B
}