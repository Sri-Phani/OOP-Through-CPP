#include<bits/stdc++.h>
using namespace std;
/*
Function over-riding in cpp
Same function name for both the classes in inheritance
If the function is there in child, then child will get accessed else parent class get accessed
*/
class personal
{
	protected://cannot be accessed using object in the main function
		string name,phno;
		//if variabes are private, then we cannot access them outside the class
		//but in protected mode, we cannot call them outside the class but can be accessed from child class
	public:
		personal()
		{
			cout<<"Personal Class"<<endl;
		}
		void display()
		{
			cout<<"Parent Class Display"<<endl;
		}
};
class student:public personal
//if public changes to protected, then we cannot access the protected accessed parent class variables cannot be displayed outside the class
{
	public:
		string rollno,branch;
		student(string n,string p,string r,string b)
		{
			cout<<"Student Class"<<endl;
			rollno=r;
			branch=b;
			//inheriting variables only works in protected or public mode only
			name=n;
			phno=p;
		}
		void display()
		{
			cout<<"Child Class Display"<<endl;
		}
};
int main()
{
	student s1("Harsha","9876543210","21A91A05G6","CSE");
	//cout<<s1.name<<" "<<s1.phno<<" "<<s1.rollno<<" "<<s1.branch<<endl;
	s1.display();
}
/*
Inheriting Mode ||	public|protected|private
=============================================
public				public protected private
protec				protec protected private
private				protec protected private
thus public inheritance changes the variables functionality but remaining are same
*/