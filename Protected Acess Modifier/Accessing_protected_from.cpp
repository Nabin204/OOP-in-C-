#include<iostream>
using namespace std;
class Book
{
	protected:
		string name;
};
class theory : public Book
{
	public:
		void display()
		{
	name="Theory of computation";
	cout<<"The name of book is:"<<name<<endl;
}
};
int main()
{
	theory t;
	t.display();
	return 0;
}

