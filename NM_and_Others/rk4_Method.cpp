#include<iostream>
using namespace std;
float f(float x,float y,float z)
{
	return 1+x*z;
}
float g(float x,float y,float z)
{
	return -x*y;
}

int main()
{
	float x0,y0,z0,h,x,l1,l2,l3,l4,l,k1,k2,k3,k4,k;
	cout<<"Enter initial values of x0,y0,z0:"<<endl;
	cin>>x0>>y0>>z0;
	cout<<"Enter the values of x and h:";
	cin>>x>>h;
	int n;
	n=(x-x0)/h;
	for(int i=0;i<n;i++)
	{
		k1=h*f(x0,y0,z0);
		l1=h*g(x0,y0,z0);
		k2=h*f(x0+0.5*h,y0+0.5*k1,z0+0.5*l1);
		l2=h*g(x0+0.5*h,y0+0.5*k1,z0+0.5*l1);
		k3=h*f(x0+0.5*h,y0+0.5*k2,z0+0.5*l2);
		l3=h*g(x0+0.5*h,y0+0.5*k2,z0+0.5*l2);
		k4=h*f(x0+h,y0+k3,z0+l3);
		l4=h*g(x0+h,y0+k3,z0+l3);
		k=(k1+2*k2+2*k3+k4)/6;
		l=(l1+2*l2+2*l3+l4)/6;
		x0=x0+h;
		y0=y0+k;
		z0=z0+l;
//		cout<<x0<<endl;
//		cout<<y0<<endl;
//		cout<<z0<<endl;
		cout<<"After "<<i+1<<" iteration, the values of x,y,z="<<x0<<endl<<y0<<endl<<z0<<endl;				
	}
	return 0;
}


