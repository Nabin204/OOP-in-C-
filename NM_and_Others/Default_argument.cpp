#include<iostream>
using namespace std;
int sum(int a,int b,int c=15)
{
	return a+b+c;

}
int main()
{
	int x,y,z;
	cout<<"Enter three numbers:";
	cin>>x>>y>>z;
	cout<<sum(3,4,9)<<endl;    //16
	cout<<sum(12,23)<<endl;    //50 
	cout<<"The sum of three numbers is:"<<sum(x,y,z)<<endl;
	cout<<"The sum of first two numbers with default argument is:"<<sum(x,y)<<endl;
	return 0;
}
