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
		void display_info()
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
	d1.display_info();         //function overriding occurs 
	dell* ptr=&d1;
	ptr->display_info();       //function overriding with pointer  
	d1.getdata();
	d1.display_info();
	return 0;                  /*if there are same function name in parent and child class
	                             and if we call the function with the object of child class
	                             then the function of child class is called->function overriding
	                             occurs*/
}
