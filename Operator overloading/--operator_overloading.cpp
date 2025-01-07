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
		void operator --()
		{
			--age;
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
	--s.age;
	cout<<"Before 1 year,the age of student was:"<<s.age<<endl;
	--s.age;
	cout<<"Before 2 year, the age of student was:"<<s.age<<endl;
	return 0;
}
