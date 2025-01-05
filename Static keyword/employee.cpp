#include<iostream>
using namespace std;
class employee
{
	public:
		static string company_name;
		string employee_name;
};
string employee::company_name="Tesla";
int main()
{
	employee e1,e2;
	cout<<"Enter the name of first employee:";
	cin>>e1.employee_name;
	cout<<"Enter the name of second employee:";
	cin>>e2.employee_name;
	cout<<endl;
	cout<<"The name of the company is:"<<employee::company_name<<endl;
	cout<<"The name of first employee is:"<<e1.employee_name<<endl;
	cout<<"The name of second employee is:"<<e2.employee_name<<endl;
	return 0;
}
