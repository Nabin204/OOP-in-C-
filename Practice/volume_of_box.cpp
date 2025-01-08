#include<iostream>
using namespace std;
class Box
{
	public:
		int length,breadth,height;
		void get_data()
		{
			cout<<"Enter length,breadth and height of cuboid:";
			cin>>length>>breadth>>height;
		}
	void displayvolume()
	{
		cout<<"The volume of cuboid is:"<<length*breadth*height<<endl;
		
	}
};
int main()
{
	Box b;
	b.get_data();
	b.displayvolume();
	return 0;
}
