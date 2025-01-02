#include<iostream>
using namespace std;
class family
{
	public:
		string family_name="Bhat";
};
class person : public family
{
	public:
		string name;
		void display_name(){
		cout<<"My name is "<<name<<" "<<family_name<<endl;
	}
};
int main()
{
	person p;
	p.name="Nabin";
	p.display_name();
	return 0;
}
