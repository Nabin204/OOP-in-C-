#include<iostream>
using namespace std;
template<typename T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	int a,b;
	double x,y;
	cout<<"Enter two integers:";
	cin>>a>>b;
	cout<<"Enter two decimal numbers:";
	cin>>x>>y;
	cout<<"The sum of integer numbers is:"<<add<int>(a,b)<<endl;
	cout<<"The sum of decimal numbers is:"<<add<double>(x,y)<<endl;
	return 0;
}
