#include<iostream>
using namespace std;
class school
{
	public:
		void show()
		{
			cout << "School is a learning platform where teachers teach and students learn."<<endl;
		}
};
class student : public school
{
	public:
		void display()
		{
			
			cout << "Students should follow all rules and regulations of school."<<endl;
		}
};
class teacher : public school
{
	public:
		void get()
		{
			cout << "Teachers should be honest to students."<<endl;
		}
};
int main()
{
school s;
s.show();
student st;
st.display();
st.show();
teacher t;
t.get();
t.show();
	return 0;
}