#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	private:
		int id,age;
		char name[20];
		public:
			void setid(int d)
			{
				id=d;
			}
			void setage(int a)
			{
			age=a;
         	}
			void setname(char *n)
			{
			strcpy(name,n);
        }
        string getname()
        {
        	return name;
		}
        int getage()
        {
        	return age;
		}
		int getid()
		{
			return id;
		}
};
int main()
{
	employee e;
	e.setage(17);
	e.setid(1002);
	e.setname("Nabin Bhat");
	cout<<"The information of employee is given below:"<<endl;
	cout<<"The name of employee is:"<<e.getname()<<endl;
	cout<<"The id of employee is:"<<e.getid()<<endl;
	cout<<"The age of employee is:"<<e.getage()<<endl;
	return 0;
}
