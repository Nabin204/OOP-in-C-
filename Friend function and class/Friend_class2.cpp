#include<iostream>
#include<string.h>
using namespace std;
class mobile
{
	private:
		int price;
		protected:
		string name;
		public:
			mobile()
			{
				price=15000;
				name="Samsung";
			}
			friend class mob;
};
class mob
{
	public:
	void displaydata(mobile & t)
	{
	cout<<"The price of mobile is:"<<t.price<<endl;
	cout<<"The name of mobile is:"<<t.name<<endl;
}
};
int main()
{
	mobile m;
	mob s;
	s.displaydata(m);
	return 0;
}
