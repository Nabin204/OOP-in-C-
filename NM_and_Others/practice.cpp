#include<iostream>
using namespace std;
class Calculator
{
	public:
		int num1,num2,num3,sum;
		Calculator(int x,int y, int z)
		{
			num1=x;
			num2=y;
			num3=z;
		}
		Calculator operator ++()
		{
         Calculator c;
         c.num1++;
         c.num2++;
         c.num3++;
         return c;
		}
};
int main()
{
	Calculator c(12,3,5);
	cout<<"The sum is:"<<c.sum<<endl;
	c.sum++;
	cout<<"The sum is:"<<c.sum<<endl;
	return 0;
}
