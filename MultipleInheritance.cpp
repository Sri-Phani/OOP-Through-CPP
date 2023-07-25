#include<bits/stdc++.h>
using namespace std;
class student
{
	public:
		int a;
		string rollno,branch;
		student(string roll,string b)
		{
			a=2;
			rollno=roll;
			branch=b;
		}
};
class sportsperson
{
	public:
		string game;
		int medalcount,a;
		sportsperson(string g,int m)
		{
			game=g;
			medalcount=m;
			a=10;
		}
};
class person:public sportsperson,public student//multiple inheritance classes have to be seperated using commas
{
	public:
		string name;
		person(string n,string roll,string b,string g,int m):sportsperson(g,m),student(roll,b)
		{
			name=n;
		}
		void display()
		{
			cout<<name<<" "<<rollno<<" "<<branch<<" "<<game<<" "<<medalcount<<endl;
		}
};
int main()
{
	person p1("Harsha","21A91A05G6","CSE","Shuttle Badminton",3);
	p1.display();
	//the variable a which is not present in child, first looks for parent-1 and then later parent-2
	//if the same variable is present in both parent classes, then ambiguous error occurs in cpp but not in python
	//then we have to avoid calling as p1.a but instead call it using their original classes as below
	cout<<p1.sportsperson::a<<" "<<p1.student::a<<endl;
}