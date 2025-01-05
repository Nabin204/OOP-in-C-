#include<iostream>
using namespace std;
class Cube
{
	public:
		static int length;
};
int Cube :: length=7;
int main()
{
	Cube c1,c2;
	cout<<"For first case:"<<endl;
	cout<<"The length of cube 1 is:"<<c1.length<<endl;
	cout<<"The length of cube 2 is:"<<c2.length<<endl;
	c1.length=10;
	cout<<"\nFor second case:"<<endl;
	cout<<"The length of cube 1 is:"<<c1.length<<endl;
	cout<<"The length of cube 2 is:"<<c2.length<<endl;
	c2.length=18;
	cout<<"\nFor third case:"<<endl;
	cout<<"The length of cube 1 is:"<<c1.length<<endl;
	cout<<"The length of cube 2 is:"<<c2.length<<endl;	
	return 0;
}
