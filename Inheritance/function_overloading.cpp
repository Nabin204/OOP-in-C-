#include<iostream>
using namespace std;
class calculation
{
	public:
		int sum(int a,int b)
		{
			return a+b;
		}
		int sum(int a,int b,int c)
		{
			return a+b+c;
		}
};
 int main()
{
	calculation c;
	int sum1=c.sum(7,9);
	int sum2=c.sum(2,5,12);
	cout<<"The sum of two numbers is:"<<sum1<<endl;
	cout<<"The sum of three numbers is:"<<sum2<<endl;
	return 0;
}
