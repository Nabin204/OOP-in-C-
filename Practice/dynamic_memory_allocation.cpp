#include<iostream>
using namespace std;
int main()
{
	int n,i,sum,*p;
	cout<<"Enter the number of students:";
	cin>>n;
	p=new int[n];
    cout<<"Enter the marks of students:";
    for(i=0;i<n;i++)
    {
    	cin>>*(p+i);
    	sum+=*(p+i);
	}
 double avg=double(sum)/double(n);
 cout<<"The marks of students are:";
  for(i=0;i<n;i++)
    {
    	cout<<*(p+i)<<endl;
	}
	cout<<"The average marks of students is:"<<avg<<endl;
delete[] p;
return 0;
}
