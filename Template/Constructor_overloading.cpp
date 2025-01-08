#include<iostream>
using namespace std;
class Tree
{
	public:
		Tree()
		{
			cout<<"Default condtructor is called."<<endl;
		}
		Tree(int n)
		{
			cout<<"Parameterized constructor with one parameter is called.\nThe parameter is:"<<n<<endl;
		}
		Tree(int n1,int n2)
		{
			cout<<"Parameterized constructor with two parameters is called.\nThe parameters are:"<<endl<<n1<<endl<<n2<<endl;
		}
};
int main()
{
	Tree t;
	Tree t1(5);
	Tree t2(7,14);
	return 0;
}
