//#include<iostream>
//using namespace std;
//int main()
//{
//	enum months{
//	january,february,march,april=23,may,june,august,september,october,november,december};
//	for(int i=january;i<=december;i++)
//	{
//	cout<<i<<"   ";
//}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int m,n,sum;
	printf("Enter two numbers:");
	scanf("%d%d",m,n);
	sum=m+n;
	printf("The sum is:",sum);
	return 0;
}
