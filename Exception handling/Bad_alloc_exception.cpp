#include<iostream>
#include<exception>
using namespace std;
int main()
{
	try
	{
 int A[]={1,2,4,6,7};
 cout<<"Number at index 2 is:"<<A[2]<<endl;
 throw exception();
}
catch(exception e)
{
	cout<<"Error in indexing of array."<<endl;
	cout<<"Error type:"<<e.what()<<endl;
}
return 0;
}
