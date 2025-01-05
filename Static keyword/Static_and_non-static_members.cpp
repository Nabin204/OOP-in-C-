#include<iostream>
using namespace std;
class greatest
{
	public:
		static int a;
		static int b;
		int c;
		int max()
		{
			if(a>b && a>c)
			return a;
			else if(b>a && b>c)
			return b;
			else
			return c;
		}
};
int greatest :: a;
int greatest :: b;
int main()
{
	greatest g;
	cout<<"Enter three numbers:";
	cin>>greatest::a>>greatest::b>>g.c;
	cout<<"The greatest number is:"<<g.max()<<endl;
	return 0;
}
