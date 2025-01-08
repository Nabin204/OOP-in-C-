#include<iostream>
#include<math.h>
using namespace std;
double f(double x)
{
	return (3*x-cos(x)-1);
}
double g(double x)
{
	return (3+sin(x));
}
int main()
{
	double x0,x1,f0,g0,E;
	int p=1;
	cout<<"Enter the initial guess:"<<endl;
	cin>>x0;
	cout<<"Enter the error:"<<endl;
	cin>>E;
	f0=f(x0);
	g0=g(x0);
	x1=x0-f0/g0;
	while (f0>E)
	{
	f0=f(x0);
	g0=g(x0);
	x1=x0-f0/g0;
	x0=x1;
	cout<<"At iteration "<<p<<" x="<<x0<<endl;
	p++;
	}
	cout<<"The required solution is:"<<x1<<endl;
	return 0;
}

