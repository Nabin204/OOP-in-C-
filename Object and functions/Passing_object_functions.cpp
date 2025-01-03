#include<iostream>
using namespace std;
class Addition
{
	public:
		int a,b;
};
int sum(Addition A1)
{
	int s=A1.a+A1.b;
	return s;
}
int main()
{
	Addition A;
	cout<<"Enter two numbers:";
	cin>>A.a>>A.b;
	cout<<"The sum of two numbers is:"<<sum(A)<<endl;
	return 0;
}
