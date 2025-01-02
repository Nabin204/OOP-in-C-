#include<iostream>
using namespace std;
class calculation
{
	public:
		int sum(int a,int b)
		{
			return a+b;
		}
		double sum(double a,double b)
		{
			return a+b;
		}
};
 int main()
{
	calculation c;
	int sum1=c.sum(7,9);
	double sum2=c.sum(2.5,12.7);
	cout<<"The sum of two integer numbers is:"<<sum1<<endl;
	cout<<"The sum of two floating point numbers is:"<<sum2<<endl;
	return 0;
}
