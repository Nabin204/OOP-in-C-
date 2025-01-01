#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
		public:
			Rectangle() : length(5), breadth(12) {}
			friend class dimension;
};
class dimension
{
	public:
		int area()
		{
	Rectangle r;
	int area=(r.length)*(r.breadth);
	return area;
}
};
int main()
{
	int a,b;
	dimension d;
	cout<<"The area of rectangle is:"<<d.area()<<endl;
	return 0;
}
