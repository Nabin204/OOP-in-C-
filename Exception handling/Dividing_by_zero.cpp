#include<iostream>
using namespace std;
int main()
{
	int numerator,denominator;
		cout<<"Enter the numerator:";
		cin>>numerator;
	try
	{
		cout<<"Enter the denominator:";
		cin>>denominator;
		if(denominator==0)
		throw(0);
		cout<<"Result="<<double(numerator)/double(denominator)<<endl;
	}
	catch(int n)
	{
		cout<<"The denominator cannot be zero.Try again!"<<endl;
	}
	return 0;
}
