#include<iostream>
using namespace std;
int main()
{
	int number=100;
	void* ptr1=&number;
	int* ptr2=static_cast<int*>(ptr1);
	cout<<"Initially the value of number is:"<<*ptr2<<endl;
	*ptr2+=50;
	cout<<"After changing the value of number becomes:"<<*ptr2<<endl;
	return 0;
}
