#include<iostream>
using namespace std;
float f(float x,float y)
{
	return y-x;
}
int main()
{
	float x0,y0,h,x,k1,k2,k3,k4,k;
	cout<<"Enter initial values of x0,y0:"<<endl;
	cin>>x0>>y0;
	cout<<"Enter the values of x and h:";
	cin>>x>>h;
	int n;
	n=(x-x0)/h;
	for(int i=0;i<n;i++)
	{
		k1=h*f(x0,y0);
		k2=h*f(x0+0.5*h,y0+0.5*k1);
		k3=h*f(x0+0.5*h,y0+0.5*k2);
		k4=h*f(x0+h,y0+k3);
		k=(k1+2*k2+2*k3+k4)/6;
		x0=x0+h;
		y0=y0+k;
		cout<<"After "<<i+1<<" iteration, the values of dy/dy="<<y0<<endl;				
	}
	return 0;
}


