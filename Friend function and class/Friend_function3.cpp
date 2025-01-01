#include<iostream>
#include<string.h>
using namespace std;
class student;
class school
{
	public:
	void info(student& s);
};
class student
{
	private:
	 string name;
	 char grade;
	 int age;
	 public:
	 	student()
	 	{
	 	name="Nabin";
	 	grade='B';
	 	age=20;
		 }
		 friend void school::info(student& s);
};
void school::info(student& s)
{
	cout<<"The name of student is:"<<s.name<<endl;
	cout<<"The grade of "<<s.name<<" is:"<<s.grade<<endl;
	cout<<"The age of nabin is:"<<s.age<<endl;
}
int main()
{
	cout<<"The information of student is given below"<<endl;
	student b;
	school a;
	a.info(b);
	return 0;
}
