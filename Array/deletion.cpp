//deletion of array element

#include<iostream>
using namespace std;
int main()
{
	int a[50],size=0,position=0,i;
	cout<<"Enter the size of array:";
	cin>>size;
	cout<<"Enter the array elements:";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"The array before deletion is:"<<endl;
		for(i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"Enter the position of data you want to delete:";
	cin>>position;
	if(position<0 || position>=size)
	{
		cout<<"Invalid Position:";
	}
	else
	{
		for(i=position;i<size;i++)
		{
			a[i]=a[i+1];
		}
		size--;
		cout<<"The data after deletion are:"<<endl;
			for(i=0;i<size;i++)
	        {
		     cout<<a[i]<<endl;
           	}
	}
}
