#include<iostream>
using namespace std;
class animal
{
	public:
		void eat()
		{
			cout<<"Animal can eat food.";
		}
};
class dog : public animal
{
	public:
		void eat()
		{
			cout<<"Dog eat masu.";
		}
};
int main()
{
	animal a;
	dog d;
	a.eat();
	cout<<endl;
    d.eat();
    return 0;
}
