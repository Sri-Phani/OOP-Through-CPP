#include<bits/stdc++.h>
using namespace std;
//encapsulation is the process of declaring variables or functions under a private class which cannot be accessed these private functions and variables outside the class
//we can access private methods(or)variables using public methods
class class_name
{
	private:
		int a=10,b=20;
		void fun()//private instance methods
		{
			cout<<c<<" "<<"Hello"<<endl;
		}
	public:
		int c=30;//attributes or instance variables
		//instance means that thevalues are changed form object to object
		//static variables(or)methods are common variables(or)methods to all classes
		void fun1()//public instance methods
		{
			cout<<a<<" "<<b<<endl;
			fun();
		}
};
int main()
{
	class_name obj;//object is an instance of a class
	obj.fun1();//goes to public class fun()
}