#include<stdio.h>
int main()
{
	int n,src=1,aux=2,des=3;
	printf("Enter the value of n:");
	scanf("%d",&n);
	void TOH(int n,int src,int aux,int des)
	{
		if(n>0)
		{
		TOH(n-1,src,des,aux);
		printf("Move a disk from %d to %d \n",src,des);
		TOH(n-1,aux,src,des);
	}
}
   TOH(n,src,aux,des);
	return 0;
}
