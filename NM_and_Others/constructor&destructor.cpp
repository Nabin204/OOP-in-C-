#include<iostream>
using namespace std;
class box{
	public:
		box()
		{
			cout<<"I am from constructor."<<endl;
		}
		~box()
		{
			cout<<"I am from destructor."<<endl;
		}
};
int main()
{
	box b;
	return 0;
}
