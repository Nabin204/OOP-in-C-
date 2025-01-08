#include<iostream>
using namespace std;
class Sum;
class Max
{
	private: 
	int a;
	public:
		void setdata(int x)
		{
			a=x;
		}
		friend int Greatest(Max,Sum);
};
class Sum{
	int b;
	public:
		void setdata(int y)
		{
			b=y;
		}
		friend int Greatest(Max,Sum);
};
int Greatest(Max p,Sum q)
{
	if(p.a>=q.b)
	{
		return p.a;
	}
	else
	{
	   return q.b;
	}
}
int main()
{
	Max m;
	Sum s;
	m.setdata(40);
	s.setdata(45);
	cout<<"The greatest number is:"<<Greatest(m,s)<<endl;
	return 0;
}
