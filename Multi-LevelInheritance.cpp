#include<bits/stdc++.h>
using namespace std;
class landline
{
	public:
		landline()
		{
			cout<<"Calls";
		}
};
class mobile:public landline
{
	public:
		mobile()
		{
			cout<<", Messages, Games, FM";
		}
};
class smartmobile:public mobile
{
	public:
		smartmobile()
		{
			cout<<", Touch, Video Calls, Movies";
		}
};
int main()
{
	smartmobile sm1;
	//mobile m1;
	//landline l1;
}