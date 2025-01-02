#include<iostream>
using namespace std;
class engineer
{
		char name[30];
		int age;
	public:
		engineer()
		{
		cout<<"Enter the name of engineer:";
		cin.getline(name,30);
		cout<<"Enter his/her age:";
		cin>>age;
		}
			void display_data()
		{
			cout<<"The name of engineer is:"<<name<<endl;
			cout<<"The age of "<<name<<" is:"<<age<<endl;
		}
};
class computer_engineer : public engineer
{
};
int main()
{
	computer_engineer c;
	c.display_data();
	return 0;
}
