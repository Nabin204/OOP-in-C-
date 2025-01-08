#include<iostream>
using namespace std;
class test
{
	private:
	int marks;
	public:
//		test()
//		{
//			cout<<"Constructor is called."<<endl;
//		}
     test(int m) 
     {
     	marks=m;
	 }
	 void display()
	 {
	 	cout<<"The marks of student is:"<<marks<<endl;
	 }
};
int main()
{
	test t(44);
    t.display();
}
