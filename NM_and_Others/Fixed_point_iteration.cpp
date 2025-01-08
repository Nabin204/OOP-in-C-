#include<iostream>
#include<math.h>
using namespace std;
double g(double x)
{
	return ((sin(x)+2)/3);
}
int main()
{
	double x0,E,g0,temp;
	int p=1;
	cout<<"Enter initial guess:"<<endl;
	cin>>x0;
	cout<<"Enter error:"<<endl;
	cin>>E;
	g0=g(x0);
	while(fabs(x0-temp)>E)
	{
		g0=g(x0);
		temp=x0;
		x0=g0;
		cout<<"At iteration "<<p<<" x="<<x0<<endl;
		p=p+1;
	}
	cout<<"The required solution is:"<<x0<<endl;
	return 0;
}
