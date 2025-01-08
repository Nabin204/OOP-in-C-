#include<iostream>
using namespace std;
float f(float x,float y)
{
	return (y-x);
}
int main()
{
	float k1,k2,k,h,x0,y0,x;
	cout<<"Enter the values of x0 and y0:";
	cin>>x0>>y0;
	cout<<"Enter the values of h and x";
	cin>>h>>x;
	int n=(x-x0)/h;
	for (int i=0;i<n;i++)
	{
		k1=h*f(x0,y0);
		k2=h*f(x0+h,y0+k1);
		k=(k1+k2)/2;
		x0=x0+h;
		y0=y0+k;
		cout<<"The values of dy/dx at first iteration are:"<<y0<<endl;
	}
	return 0;
}
