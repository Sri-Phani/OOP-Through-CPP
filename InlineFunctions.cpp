#include<bits/stdc++.h>
using namespace std;
inline void fun(int a,int b)
{
	cout<<a+b<<endl;
}
int main()
{
	int a,b;
	cin>>a>>b;
	fun(a,b);//instead of calling the function, the code inside that function is going to be called here when using inline
	//inline only works for small codes
	//drawback is that inline function cannot work with return statements or loops
}