#include<iostream>
using namespace std;
class teacher
{
	public:
		void info()
		{
		cout<<"I am a teacher."<<endl;
	}
};
class student
{
	public:
		void get()
		{
		cout<<"I am a student."<<endl;
	}
};
class knowledge:public teacher,public student
{
	public:
		void getdata()
		{
		cout<<"Teacher has a little bit more knowledge than student."<<endl;
	}
};
int main()
{
knowledge k;
k.info();
cout<<endl;
k.get();
	return 0;
}
