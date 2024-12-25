//data insertion in an array

#include<iostream>
using namespace std;
int main()
   {
	int i,index,data;
	int marks[5];
	cout<<"Enter the marks of 5 students:"<<endl;
	for(i=0;i<5;i++){
		cin>>marks[i];
	}
		cout<<"________________________________"<<endl;
		for(int i=0;i<5;i++){
		cout<<marks[i]<<endl;
	}
	cout<<"Enter the index and data you want to insert:";
	cin>>index>>data;
	if(index<0 || index>=5)
	{
		cout<<"Invalid index.";
	}
	else
	{
	  for(i=5;i>index;i--)
	  {
	  	marks[i]=marks[i-1];
	  }
	  marks[index]=data;
	}
	cout<<"The array after insertion is:"<<endl;
	for(i=0;i<6;i++)
	{
		cout<<marks[i]<<endl;
	}
}
