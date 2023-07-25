#include<bits/stdc++.h>
using namespace std;
//polymorphism or function overloading is the same function name but the functions are used for different purposes
class class_name
{
	public:
		void fun(int a,int b)//we have to take unused variables to show that both the functions are of different structures
		{
			cout<<"Hii";
		}
		void fun()
		{
			cout<<"Bye";
		}
		void fun(float a)
		{
			cout<<"Hehe";
		}
};
int main()
{
	class_name obj;
	obj.fun();//this will neither go to the fun(int a,int b) nor fun(float a)
}