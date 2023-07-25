#include<bits/stdc++.h>
using namespace std;
class class_name
{
	private:
		int d=2000;
	protected:
		int e=3000;
	public:
		static int college;//static public variable which is common for all the objects
		int a=100;
		void fun()//in instance methods, we can access and modify both static and instance variables
		{
			college=10;//changes for all the objects
			a=2;//only changes for a particular object through which the function(or)method is called
		}
		static void fun1()//in static methods, we can access and modify only static variables
		{
			//cannot modify instance variables in static methods like a=200;
			college=300;
		}
		int func()
		{
			return d;//we can access private or protected variables too..
		}
};
int class_name::college=1;//:: is known as scope resolution operator
int main()
{
	class_name obj1,obj2;
	obj1.fun();//as we are calling fun() with obj1 and changing the static variable value, this static value becomes as 10 for every single object too..
	//but when we change a normal integer value with obj1, that value will only change for that object itself
	obj1.fun1();//here the static variable college changes into 300
	cout<<obj1.college<<" "<<obj1.a<<endl;
	cout<<obj2.college<<" "<<obj2.a<<endl;
	class_name obj3;
	cout<<obj3.func();
}