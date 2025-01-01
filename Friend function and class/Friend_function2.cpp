#include<iostream>
#include<string.h>
using namespace std;
class books
{
	private:
		int price;
		protected:
			char subject_name[30];
			public:
				void setdata()
				{
					cout<<"Enter the subject name:";
					cin.getline(subject_name,30);
					cout<<"Enter the price of "<<subject_name<<":";
					cin>>price;
				}
		friend void book(books& b);
};
void book(books& b)
{
	cout<<"The name of book is:"<<b.subject_name<<endl;
	cout<<"The price of book is:"<<b.price<<endl;
}
int main()
{
	books t;
	t.setdata();
	book(t);
	return 0;
}
