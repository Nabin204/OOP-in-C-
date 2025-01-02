#include<iostream>
using namespace std;
class laptop
{
	private:
	string name;
	int price;
	public:
		 void getdata()
		{
			cout<<"Enter the name of laptop:";
			cin>>name;
			cout<<"Enter the price of laptop:";
			cin>>price;
		}
		virtual void display_info()
		{
			cout<<"The name of laptop is:"<<name<<endl;
			cout<<"The price of laptop is:"<<price<<endl;
		}
};
class dell:public laptop
{
	public:
		void display_info()
		{
			cout<<"This is dell laptop."<<endl;
		}
};
int main()                     
    {
	dell d1;					              
	laptop* ptr=&d1;
	ptr->display_info();
	return 0;
}
