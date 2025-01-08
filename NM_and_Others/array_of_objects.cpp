#include<iostream>
#include<iomanip>
using namespace std;
class student{
	int roll_no;
	string name;
	float marks;
	public:
		void read_data(int n)
		{
			cout<<"Enter roll number,name and marks of student "<<n<<":";
			cin>>roll_no>>name>>marks;
		}
		void display()
		{
			cout<<endl<<roll_no<<setw(10)<<name<<setw(10)<<marks;
		}
};
int main()
{
	student stds[5];
	int i;
	for(i=0;i<5;i++)
	stds[i].read_data(i+1);
	cout<<"Roll number:"<<setw(10)<<"Name:"<<setw(10)<<"marks";
	for(i=0;i<5;i++)
	{
		stds[i].display();
	}
	return 0;
}
