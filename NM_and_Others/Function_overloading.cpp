#include<iostream>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
int sum(int w,int x,int y,int z=20)
{
	return w+x+y+z;
}
int main()
{
	cout<<sum(2,3)<<endl;
	cout<<sum(3,4,8)<<endl;
	cout<<sum(5,11)<<endl;
	return 0;
}
