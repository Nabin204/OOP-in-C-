#include<iostream>
using namespace std;
class Employee
{
	private:
		string name="Nabin";
		int age=20;
		public:
			friend void display_info(Employee);
};
void display_info(Employee e1)
{
	cout<<"The name of employee is:"<<e1.name<<endl;
	cout<<"The age of employee is:"<<e1.age<<endl;
}
int main()
{
	Employee emp;
	display_info(emp);
	return 0;
}
