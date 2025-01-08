#include<iostream>
using namespace std;
int main()
{
	int number=345;
	void* ptr=&number;
	cout<<"Initially the value of number is:"<<*(int*)ptr<<endl;
	*(int*)ptr+=55;
	cout<<"After adding 55, the number becomes:"<<number<<endl;
	cout<<"After adding 55, the number becomes:"<<*(int*)ptr<<endl;
	*static_cast<int*>(ptr)+=100;
	cout<<"Again,adding 100, the number becomes:"<<number<<endl;
	cout<<"Again,adding 100, the number becomes:"<<*(int*)ptr<<endl;
	cout<<"Again,adding 100, the number becomes:"<<*static_cast<int*>(ptr)<<endl;
	return 0;
}
