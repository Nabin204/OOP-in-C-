#include<iostream>
using namespace std;
#define PI 3.1416
class circle
{
	public:
		int radius;
		void get_radius(int rad)
		{
			radius=rad;
		}
		double calculate_area()
		{
			double area=PI*radius*radius;
			return area;
		}
};
int main()
{
	circle c;
	int radius;
	cout<<"Enter the radius of circle:";
	cin>>radius;
	c.get_radius(radius);
	double A=c.calculate_area();
	cout<<"The area of circle is:"<<A<<endl;
	return 0;
}
