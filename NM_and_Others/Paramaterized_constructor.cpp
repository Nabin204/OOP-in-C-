#include<iostream>
using namespace std;
class sum
{
	private:
		int a,b,c;
		public:
			sum(int a,int b,int c)
			{
             cout<<"The sum of three numbers is:"<<(a+b+c)<<endl;
			}
};
int main()
{
	sum result(10,3,4);
	return 0;
}
