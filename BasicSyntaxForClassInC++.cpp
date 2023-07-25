#include<bits/stdc++.h>
using namespace std;
//class is a collection of member variables and member functions
class Student//class name--> better to write the first character as "capital"
{
	//member variables
	//member function or method
	//by default the member variables and member functions in cpp are private
	//3 access specifiers--> public, private and protected
	public:
		int rollno;
		float per;
		string name;
		string branch;
		void get_data(int roll,float p,string n,string b)
		{
			rollno=roll;
			per=p;
			name=n;
			branch=b;
		}
		void put_data();//function prototype or function declaration to write it outside of class
	//cannot use private specifiers outside the class
	//protected cannot be used outside the class too..
};
void Student::put_data()
{
	cout<<rollno<<" "<<per<<" "<<name<<" "<<branch<<endl;
}
int main()
{
	Student std1,std2;//creation of a object just like we did for structures and unions in c-lang
	//class_name object_name
	int rollno;
	float per;
	string name;
	string branch;
	cin>>rollno>>per>>name>>branch;
	std1.get_data(rollno,per,name,branch);
	std1.put_data();
	cout<<std1.rollno<<" "<<std1.per<<" "<<std1.name<<" "<<std1.branch<<endl;
	cin>>rollno>>per>>name>>branch;
	std2.get_data(rollno,per,name,branch);
	std2.put_data();
	cout<<std2.rollno<<" "<<std2.per<<" "<<std2.name<<" "<<std2.branch;
}