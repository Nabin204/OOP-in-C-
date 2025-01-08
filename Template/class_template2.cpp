#include<iostream>
using namespace std;
template<class T>
class Max{
	private:
		T a,b,c;
		public:
			Max(T x,T y,T z)
			{
				a=x;
				b=y;
				c=z;
			}
		T greatest()
		{
			if(a>b && a>c)
			return a;
			else if(b>a && b>c)
			return b;
			else
			return c;
		}
};
int main()
{
	Max<int>int_data(4,7,9);
	Max<double>double_data(3.7,2.789,34.23);
	cout<<"The greatest integer is:"<<int_data.greatest()<<endl;
	cout<<"The greatest decimal number is:"<<double_data.greatest()<<endl;
	return 0;
}
