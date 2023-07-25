#include<bits/stdc++.h>
using namespace std;
/*
Order of Inheritances:
Single
Heirarchial
Multi-level
Multiple
Hybrid
*/
class personal
{
	public:
		string name,phno;
		personal()
		{
			cout<<"Personal Class"<<endl;
		}
};
class student:public personal//colon and access-specifiers are compulsory
{
	public:
		string rollno,branch;
		student(string n,string p,string r,string b)
		{
			cout<<"Student Class"<<endl;
			rollno=r;
			branch=b;
			name=n;
			phno=p;
		}
		void display()
		{
			cout<<name<<" "<<phno<<" "<<rollno<<" "<<branch<<endl;
		}
};
int main()
{
	student s1("Harsha","9876543210","21A91A05G6","CSE");
	//when object is created, first calls the parent class and then calls student class constructor later..
	cout<<s1.name<<" "<<s1.phno<<" "<<s1.rollno<<" "<<s1.branch<<endl;
	s1.display();
}