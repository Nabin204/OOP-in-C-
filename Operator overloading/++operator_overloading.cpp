#include<iostream>
using namespace std;
class student
{
	public :
		int age;
		student(int n) : age(n) {}
		void operator ++()
		{
			++age;
		}
};
int main()
{
	int a;
	cout<<"Enter the age of student:";
	cin>>a;
	student s(a);
	cout<<"The present age of student is:"<<s.age<<endl;
	++s.age;
	cout<<"After 1 year,the age of student will be:"<<s.age<<endl;
	++s.age;
	cout<<"After 2 year, the age of student will be:"<<s.age<<endl;
	return 0;
}
