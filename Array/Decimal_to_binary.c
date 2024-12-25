#include<stdio.h>
#include<math.h>
#include<string.h>
char binary(int n)
{
	char s[]={};
	int bin[]={},p=0,i,r,size;
	while(n!=0)
	{
		r=n%10;
		bin[p]=r;
		n=n/2;
	}
	size=sizeof(bin)/sizeof(bin[0]);
	for(i=size-1;i>=0;i--)
	{
		s=s+str(bin[i]);
	}
	return s;
}

int main()
{
	int x=24,y;
	y=binary(x);
	printf("The binary number is:%s",y);
	return 0;
}
