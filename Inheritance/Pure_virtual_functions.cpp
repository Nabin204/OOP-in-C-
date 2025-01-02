#include<iostream>
using namespace std;
class polygon
{
	public:
		void display_sides()
		{
			cout<<"Polygon has many sides."<<endl;
		}
		virtual void display_info()=0;
};
class triangle:public polygon
{
	public:
	void display_info()
	{
		cout<<"Triangle has 3 sides."<<endl;
	}
};
int main()
{
	triangle t1;
	t1.display_info();
	return 0;
}
