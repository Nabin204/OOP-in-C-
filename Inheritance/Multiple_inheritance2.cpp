#include<iostream>
using namespace std;
class box
{
	private:
		int length,breadth,height;
		public:
			void setdata(int l,int b,int h)
			{
				length=l;
				breadth=b;
				height=h;
			}
	 int volume()
	 {
	 	return length*breadth*height;
	 }
};
class paper
{
	private:
		int len,br;
		public:
			void set(int L,int B)
			{
				len=L;
				br=B;
			}
			int area()
			{
				return len*br;
			}
};
class calc:public box,public paper{
};
int main()
{
calc va;
va.setdata(2,3,4);
va.set(4,5);
cout<<"The volume of box is:"<<va.volume()<<endl;
cout<<"The area of paper is:"<<va.area()<<endl;
return 0;
}

