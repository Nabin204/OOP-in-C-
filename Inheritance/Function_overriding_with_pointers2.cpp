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
int main()                    /* Here in this program we create pointer of laptop class
                                 which points to the address of an object of child class,         
	                            the function overriding does not occurs*/  
    {
	dell d1;					              
	laptop* ptr=&d1;
	ptr->getdata();
	ptr->display_info();
	return 0;
}
