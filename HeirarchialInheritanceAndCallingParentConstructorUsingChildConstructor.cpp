#include<bits/stdc++.h>
using namespace std;
class personal
{
	public:
		string name,phno;
		static string college;//if you declare a static variable inside the class, it gives an error
		personal(string n,string ph)
		{
			name=n;
			phno=ph;
		}
		void display()
		{
			cout<<name<<" "<<phno<<endl;
		}
};
string personal::college="Aditya";//we have to declare static variables outside the class
class employee:public personal//sub-class-1
{
	public:
		string id,dept;
		employee(string n,string ph,string idee,string d):personal(n,ph)
		{
			id=idee;
			dept=d;
		}
		void display()
		{
			personal::display();
			cout<<id<<" "<<dept<<endl;
		}
};
class student:public personal//sub-class-2
{
	public:
		string rollno,branch;
		student(string n,string ph,string roll,string b):personal(n,ph)
		//calling parent class constructor using child class
		//we have to do this in case of a parameterized parent class constructor only
		{
			rollno=roll;
			branch=b;
		}
		void display()
		{
			personal::display();//calling parent display method
			cout<<rollno<<" "<<branch<<" "<<personal::college<<endl;
		}
};
int main()
{
	student std1("Harsha","1234567890","21A91A05G6","CSE");
	std1.display();
	employee emp1("Harsha","1234567890","QWERTYUIOP","Developer");
	emp1.display();
}