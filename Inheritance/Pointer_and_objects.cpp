#include<iostream>
using namespace std;
class Student
{
	public:
	   string name;
	   int age;
	   double percentage;
};
int main()
{
	Student s1;
	s1.name="Nabin Bhat";
	s1.age=20;
	s1.percentage=79.6;
	Student* s_ptr=&s1;
	cout<<"The name of student is:"<<s_ptr->name<<endl;
	cout<<"The age of student is:"<<s_ptr->age<<endl;
	cout<<"The percentage of student is:"<<s_ptr->percentage<<endl;
	return 0;
}
