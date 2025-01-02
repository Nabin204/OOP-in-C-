#include<iostream>
using namespace std;
class parent
{
	private:
		char name[20],address[20];
		public:
			void getdata()
			{
				cout<<"Enter your name:";
				cin.getline(name,20);
				cout<<"Enter your address:";
				cin.getline(address,20);
			}
			void putdata()
			{
				cout<<"Your name is:"<<name<<endl;
				cout<<"Your address is:"<<address<<endl;
			}
};
class child1:public parent
{
	private:
		int roll_no;
		long long int phone_no;
		public:
			void get()
			{
				cout<<"Enter your roll number:";
				cin>>roll_no;
				cout<<"Enter your phone number:";
				cin>>phone_no;
			}
			void put()
			{
				cout<<"Your roll number is:"<<roll_no<<endl;
				cout<<"Your phone number is:"<<phone_no<<endl;
			}
};
class child2:public child1
{
	private:
		int age;
		public:
			void takedata()
			{
				cout<<"Enter your age:";
				cin>>age;
			}
			void display()
			{
				cout<<"Your age is:"<<age<<endl;
			}
};
int main()
{
	child2 c2;
	c2.getdata();
	c2.get();
	c2.takedata();
	cout<<endl;
	cout<<"...... YOUR INFORMATION IS ......."<<endl;
	c2.putdata();
	c2.put();
	c2.display();
	return 0;
}

