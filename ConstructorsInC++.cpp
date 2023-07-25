#include<bits/stdc++.h>
using namespace std;
//constructor is always the same name as the class name
class Student
{
	public:
		int rollno;
		float per;
		string name;
		string branch;
		Student(int roll,float p,string n,string b)//constructor is called when a new object is created instantly
		{
			rollno=roll;
			per=p;
			name=n;
			branch=b;
		}
		void put_data();
};
void Student::put_data()
{
	cout<<rollno<<" "<<per<<" "<<name<<" "<<branch<<endl;
}
int main()
{
	//as 2 objects are created in this code, the constructor will be called 2 times
	int rollno;
	float per;
	string name;
	string branch;
	cin>>rollno>>per>>name>>branch;
	Student std1(rollno,per,name,branch);
	std1.put_data();
	cin>>rollno>>per>>name>>branch;
	Student std2(rollno,per,name,branch);
	std2.put_data();
}