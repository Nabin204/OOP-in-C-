#include<iostream>
using namespace std;
class person
{
	public:
		void info()
		{
		cout<<"I am a person."<<endl;
	}
};
class student:public person
{
	public:
		void get()
		{
		cout<<"I am a student."<<endl;
	}
};
class employee:public person
{
	public:
		void getdata()
		{
		cout<<"I am an employee."<<endl;
	}
};
int main()
{
person p;
student s;
employee e;
s.info();
s.get();
	return 0;
}
