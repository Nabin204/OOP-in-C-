#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
		public:
			Rectangle(int length,int breadth)
			{
				this->length=length;
				this->breadth=breadth;
			}
			int calculate_area()
			{
				return length*breadth;
			}
};
int main()
{
	int x,y;
	cout<<"Enter the sides of rectangle:";
	cin>>x>>y;
	Rectangle rect(x,y);
	cout<<"The area of rectangle is:"<<rect.calculate_area()<<endl;
	return 0;
}
