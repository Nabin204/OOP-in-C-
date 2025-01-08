#include<iostream>
using namespace std;
template <class T>
class student
{
	private:
		T name,age,marks;
		public:
			void getdata()
			{
				cout<<"Enter your name:";
				cin>>name;
				cout<<"Enter your age:";
				cin>>age;
				cout<<"Enter your marks:";
				cin>>marks;
			}
			void display()
			{
				cout<<"Your name is:"<<name<<endl;
				cout<<"Your age is:"<<age<<endl;
				cout<<"Your marks is:"<<marks<<endl;
			}
};
int main()
{

    student <string> s1;
	s1.getdata();
	s1.display();
	return 0;
}
