#include<iostream>
using namespace std;
class personal{
	public:
		string name;
		personal(string name)
		{
			this->name=name;
		}
		void display()
		{
			cout<<name;
		}
		
};
class student:public personal{
	public:
		string name,rollno;
		student(string name,string rollno):personal(name)
		{
			this->rollno=rollno;
		}
		void display()
		{
			cout<<rollno<<endl;
			personal::display();
		}
};
int main()
{
	student *obj,s1("Harsha","21A91A05G6");//pointer of class
	obj=&s1;
	obj->display(); // pointer to the class
}