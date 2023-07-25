#include<bits/stdc++.h>
using namespace std;
//Operator overloading is a compile-time polymorphism.
//It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.
class Time
{
	public:
		int hour,min;
		Time(int hh,int mm)
		{
			hour=hh;
			min=mm;
		}
		Time operator +(Time &T)//return type is Time class having only single argument passing into the function
		{
			Time t3(0,0);//as the constructor has arguments, we have to pass default as 0's
			t3.hour=this->hour+T.hour;//this pointer belongs to t1 and T belongs to t2
			t3.min=this->min+T.min;
			if(t3.min>60)
			{
				t3.hour+=1;
				t3.min-=60;
			}
			return t3;
		}
		void operator ++()//pre-increment
		{
			hour++;
			min++;
		}
		void operator ++(int)//post-increment
		{
			hour++;
			min++;
		}
};
int main()
{
	/*
	Operator Overloading Syntax
	returntype operator symbol
	{
		//block of statements
	}
	*/
	Time t1(7,50);
	Time t2(8,15);
	cout<<t1.hour<<":"<<t1.min<<endl;
	cout<<t2.hour<<":"<<t2.min<<endl;
	Time t3=t1+t2;//overloading '+' operator function which is having a return value of Time class
	//represents t1.plus(t2) meaning only passing a single argument t2
	//t2+t1 means t2.plus(t1) where the single argument is t1
	cout<<t3.hour<<":"<<t3.min<<endl;
	++t1;//pre-increment
	cout<<t1.hour<<":"<<t1.min<<endl;
	t2++;//post-increment
	cout<<t2.hour<<":"<<t2.min<<endl;
}