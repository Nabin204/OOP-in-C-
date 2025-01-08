#include<iostream>
using namespace std;
void input(double a[3][4])
{
		for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
		cin>>a[i][j];
	} 
	cout<<"\n";
	}
}
void display(double a[3][4])
{
	    cout<<"The augmented matrix become:"<<endl;
    	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){	
		cout<<a[i][j]<<"  ";
	}
	cout<<endl;
}}
int main()
{
	double a[3][4],x[3],t,s;
	int i,j,k,p;
	cout<<"Enter the elements of augmented matrix:"<<endl;
	input(a);
	for(j=0;j<2;j++)
	{
		for(i=j+1;i<3;i++)
		{
			t=a[i][j]/a[j][j];
			for(k=0;k<4;k++)
			{
				a[i][k]=a[i][k]-a[j][k]*t;
			}
		}
	}
	display(a);
	//performing backward substitution
//	x[0]=a[0][3];
//	x[1]=a[1][3];
//	x[2]=a[2][3];
	for(i=2;i>=0;i--)
	{
		s=0;
		for(j=i+1;j<3;j++)
		{
			x[i]=(a[i][3]-s)/a[i][i];
			s+=a[i][j]*x[j];
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<"x("<<i+1<<")="<<x[i]<<endl;
	}
	return 0;
}

