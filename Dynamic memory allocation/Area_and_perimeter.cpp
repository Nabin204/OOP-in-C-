#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{
	private:
		double a;
		double b;
		double c;
		public:
			Triangle(double x,double y,double z) : a(x),b(y),c(z) {}
			void check_triangle()
			{
			if((a+b)<c || (b+c)<a || (c+a)<b)
			{
				cout<<"The triangle is not possible with given sides."<<endl;
			exit(0);
		}
		}
			double find_perimeter()
			{
				return a+b+c;
			}
			double find_area()
			{
				double s=(a+b+c)/2.0;
				double A=pow(s*(s-a)*(s-b)*(s-c),0.5);
				return A;
			}
};
int main()
{
	double p,q,r;
	cout<<"Enter the sides of Triangle:";
	cin>>p>>q>>r;
	Triangle* t=new Triangle(p,q,r);
	t->check_triangle();
	cout<<"The perimeter of triangle is:"<<t->find_perimeter()<<endl;
	cout<<"The area of triangle is:"<<t->find_area()<<endl;
	delete t;
	return 0;
}
