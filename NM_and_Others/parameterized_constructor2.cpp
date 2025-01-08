#include<iostream>
using namespace std;
class largest
{
	private:
		int a,b,c;
		public:
			largest(int a,int b,int c)
			{
             cout<<"The largest number is:"<<max(a,b,c)<<endl;
			}
			int max(int a,int b,int c);
};
int largest :: max(int x,int y,int z)
{
  if(x>y && x>z)
  return x;
  else if(y>x && y>z)
  return y;
  else
  return z;	
}
int main()
{
	largest result(7,-2,6);
	return 0;
}
