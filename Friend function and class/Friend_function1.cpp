#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
		int age;
		protected:
			long long int mobile_no;
			public:
				student()
				{
					age=20;
					mobile_no=9749319738;
				}
		friend void info(student& obj1);
};
void info(student& obj1)
{
	cout<<"The age of student is:"<<obj1.age<<endl;
	cout<<"The mobilel number of student is:"<<obj1.mobile_no<<endl;
}
int main()
{
	student s;
	info(s);
	return 0;
}
