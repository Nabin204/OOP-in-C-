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
		string message="The denominator cannot be zero.Try again!";
		if(denominator==0)
		throw(message);
		cout<<"Result="<<double(numerator)/double(denominator)<<endl;
	}
	catch(string message)
	{
		cout<<message<<endl;
	}
	return 0;
}
