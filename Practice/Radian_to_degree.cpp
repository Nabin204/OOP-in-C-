#include<iostream>
#define pi 3.14259
using namespace std;
class Degree
{
	double degree;
	public:
		Degree()
		{
			degree=0;
		}
		Degree(double d)
		{
			degree=d;
		}
		double getdegree()
		{
			return degree;
		}
		void display()
		{
			cout<<"Degree="<<degree<<endl;
		}
};
class Radian
{
	double radian;
	public:
		Radian(double r=0)
		{
			radian=r;
		}
		operator Degree()
		{
			double d;
			d=radian*180/pi;
			return (Degree(d));
		}
		void input()
		{
			cout<<"Enter value in radian:";
			cin>>radian;
		}
};
int main()
{
	Degree d1;
	Radian r1;
	r1.input();
	d1=r1;
	d1.display();
	return 0;
}
