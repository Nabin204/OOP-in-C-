#include<iostream>
using namespace std;
class student
{
	protected:
		string name;
		int roll_no;
		public:
			void setdata(string n,int r)
			{
				name=n;
				roll_no=r;
			}
			void getdata()
			{
				cout<<"The name of student is:"<<name<<endl;
				cout<<"The roll number of student is:"<<roll_no<<endl;
			}
};
int main()
{
	student s;
	string name;
	int roll_number;
	cout<<"Enter the name of student:";
	cin>>name;
    cout<<"Enter roll_number of student:";
    cin>>roll_number;
	s.setdata(name,roll_number);
	s.getdata();
	return 0;
}
