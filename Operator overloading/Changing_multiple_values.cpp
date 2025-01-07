#include<iostream>
using namespace std;
class Rectangle
{
	public:
		int length,breadth;
		Rectangle operator ++()
		{
			Rectangle r;
			r.length=++length;
			r.breadth=++breadth;
			return r;
		}
};
int main()
{
     int len,br;
	 cout<<"Enter the length and breadth of rectangle 1:";
	 cin>>len>>br;
	 Rectangle rect1,rect2;
	 rect1.length=len;
	 rect1.breadth=br;
	 	cout<<"The length of rectangle 1="<<rect1.length<<endl;
		cout<<"The breadth of rectangle 1="<<rect1.breadth<<endl;
		rect2=++rect1;
		cout<<"The length of rectangle 2="<<rect2.length<<endl;
		cout<<"The breadth of rectangle 2="<<rect2.breadth<<endl;
		return 0;
}
