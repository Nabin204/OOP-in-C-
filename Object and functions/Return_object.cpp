#include<iostream>
using namespace std;
class Addition
{
	public:
		int a,b;
};
Addition sum()
{
	Addition A1;
	A1.a=5,A1.b=8;
	return A1;
}
int main()
{
	Addition A;
	A=sum();
	cout<<"The first number is:"<<A.a<<endl;
	cout<<"The second number is:"<<A.b<<endl;
	return 0;
}
