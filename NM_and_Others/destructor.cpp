#include<iostream>
using namespace std;
class teacher
{
	private:
		char name[30];
		public:
			teacher()
			{
				cout<<"Constructor is called."<<endl;
				cout<<"Enter the name of teacher:";
				cin>>name;
			}
			~teacher()
			{
				cout<<"Destructor is called.";
			}
			void display()
			{
				cout<<"The name of teacher is:"<<name<<endl;
			}
};
int main()
{
	teacher t;
	t.display();
	return 0;
}
