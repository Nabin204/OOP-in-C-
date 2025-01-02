#include <iostream>
using namespace std;
class person
{
	public:
		void get_info()
		{
			cout << "Every person have their own name."<<endl;
		}
};
class student{
	public:
		void get_info()
		{
			cout << "I am a student."<<endl;
		}
};
class employee
{
	public:
		void get_info()
		{
			cout << "I am an employee.";
		}
};
int main()
{
	student s1;
	person p1;
	employee e1;
	p1.get_info();
	s1.get_info();
	e1.get_info();
	return 0;
}
