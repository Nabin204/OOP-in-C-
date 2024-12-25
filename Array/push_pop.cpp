#include<iostream>
using namespace std;
#define size 5
int array[size];
int top=-1;
void push(int num)
{
	if(top==size-1)
	{
		cout<<"stack overflow"<<endl;
	}
	else
	{
		top=top+1;
		array[top]=num;
	}
}
void pop()
{
	if(top==-1)
	{
		cout<<"stac underflow."<<endl;
	}
	else
	{
		top=top-1;
	}
}
void stack_print()
{
	for(int i=top;i>=0;i--)
	{
		cout<<array[i]<<endl;
	}
}
int main()
{
	push(10);
	push(125);
	push(20);
	push(2);
	push(43);
	
	stack_print();
}
