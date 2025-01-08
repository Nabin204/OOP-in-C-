#include<iostream>
using namespace std;
class Student 
{
		char name[30];
		int age;
		public:
		void input()
		{
			cout<<"Enter your name:";
			cin>>name;
			cout<<"Enter your age:";
			cin>>age;
		}
		void display();
};
void Student :: display()
{
	cout<<"Your name is:"<<name<<endl;
	cout<<"Your age is:"<<age<<endl;
}
int main()
{
	Student s;
	s.input();
	s.display();
	return 0;
}
