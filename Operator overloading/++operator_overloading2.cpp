#include<iostream>
using namespace std;
class student
{
	public :
		int age;
		student(int n) : age(n) {}
		int operator ++()
		{
		return ++age;
		}
};
int main()
{
	int a;
	cout<<"Enter the age of student:";
	cin>>a;
	student s(a);
	cout<<"The present age of student is:"<<s.age<<endl;
	int age=++s;
	cout<<"After 1 year,the age of student will be:"<<age<<endl;
    age=++s;
	cout<<"After 2 year, the age of student will be:"<<age<<endl;
	return 0;
}
