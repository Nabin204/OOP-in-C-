#include<iostream>
using namespace std;
class student
{
	public :
		int age;
		void get_age(int a)
		{
			age=a;
		}
		int operator --()
		{
		return --age;
		}
};
int main()
{
	int a;
	cout<<"Enter the age of student:";
	cin>>a;
	student s;
	s.get_age(a);
	cout<<"The present age of student is:"<<s.age<<endl;
	int b=--s;
	cout<<"Before 1 year,the age of student was:"<<b<<endl;
	b=--s;
	cout<<"Before 2 year, the age of student was:"<<b<<endl;
	return 0;
}
