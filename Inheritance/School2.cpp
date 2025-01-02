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
		void show()
		{
			school :: show();
			cout << "Students should follow all rules and regulations of school."<<endl;
		}
};
class teacher : public school
{
	public:
		void show()
		{
			cout << "Teachers should be honest to students."<<endl;
		}
};
int main()
{
student st;
st.show();
cout<<endl;
teacher t;
t.show();
	return 0;
}
