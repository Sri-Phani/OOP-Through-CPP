#include<bits/stdc++.h>
using namespace std;
//Templates used to pass data type as a parameter so that we don’t need to write the same code for different data types
template<typename T>
T sum(T a,T b)
{
	return a+b;
}
//template overloading--> two different data types in same template
template<class T,class U>
U sum(T a,U b,U c)
{
	return a+b+c;
}
int main()
{
	int a,b;
	float c,d;
	cin>>a>>b>>c>>d;
	cout<<sum(a,b)<<" ";
	cout<<sum(a,c,d)<<" ";
	cout<<sum(d,b,a);
}