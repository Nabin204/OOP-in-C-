#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 50

int priority_order(char alpha)
{
	if(alpha == '+' || alpha == '-')
	return 1;
	else if(alpha == '*' || alpha =='/')
	return 2;
	else if(alpha == '^')
	return 3;
	
	return 0;
}

void convert(const char* infix,char* postfix)
{
	int i=0,j=0;
	char stack[MAX_SIZE];
	int top=-1;
	
	while (infix[i] != '\0')
	{
		if((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z') )
		{
			postfix[j++]=infix[i++];
		}
		else if (infix[i]=='(')
		{
			stack[++top]=infix[i++];
		}
		else if(infix[i]==')')
		{
			while(top!=-1 && stack[top]!='(')
			{
				postfix[j++]=stack[top--];
			}
			if(top!=-1 && stack[top]=='(')
			{
				top--;
			}
			i++;
		}
		else
		{
			while(top!=-1 && priority_order(infix[i]) <= priority_order(stack[top]))
			{
				postfix[j++]=stack[top--];
			}
			stack[++top]=infix[i++];
		}
	}
	while(top!=-1)
	{
		postfix[j++]=stack[top--];
	}
	postfix[j]='\0';
}
int main()
{
	const char infix[]="((a+(b*c))-d)";
	char postfix[MAX_SIZE];
	convert(infix,postfix);
	printf("Postfix is:%s \n",postfix);
	return 0;
}
//postfix
//push
//pop
