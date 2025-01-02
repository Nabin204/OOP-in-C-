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
	Student* s_ptr=&s1;
	s_ptr->name="Nabin Bhat";
	s_ptr->age=20;
	s_ptr->percentage=79.6;
	cout<<"The name of student is:"<<s1.name<<endl;
	cout<<"The age of student is:"<<s1.age<<endl;
	cout<<"The percentage of student is:"<<s1.percentage<<endl;
	return 0;
}
