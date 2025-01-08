#include<iostream>
#include<math.h>
using namespace std;
float f(float x)
{
	return (pow(x,4)-32);
}
int main()
{
	float x1,x2,x0,f1,f2,f0,E;
	int p=1;
	cout<<"Enter the initial guess:"<<endl;
	cin>>x1>>x2;
	cout<<"Enter Error:"<<endl;
	cin>>E;
	f1=f(x1);
	f2=f(x2);
	if(f1*f2>0)
	{
		cout<<"Initial guess are wrong."<<endl;
		exit;
	}
	while(fabs(x1-x2)>E)
	{
		x0=(x1*f2-x2*f1)/(f2-f1);
		f1=f(x1);
		f2=f(x2);
		f0=f(x0);
		if(f1*f0<0)
		{
			x2=x0;
		}
		else
		{
			x1=x0;
		}
		cout<<"At iteration "<<p<<" x="<<x0<<endl;
		p++;
	}
	cout<<"The required solution is x="<<x0<<endl;
	return 0;
}
