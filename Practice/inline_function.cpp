#include<iostream>
using namespace std;
inline int sum(int x,int y)
{
	return (x+y);
}
int main()
{
	int a,b;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	cout<<"The sum is:"<<sum(a,b)<<endl;
	return 0;
}
