#include<iostream>
using namespace std;
int main()
{
	int i,j,m,n;
	double A[4][4],B[4][4],C[4][4];
		cout<<"Enter the number of rows and coulumns of matrix:";
		cin>>m>>n;
		cout<<"Enter the elements of first matrix"<<endl;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>A[i][j];
			}
		}
			cout<<"Enter the elements of second matrix"<<endl;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>B[i][j];
				C[i][j]=A[i][j]+B[i][j];
			}
		}
		cout<<"The sum of two matrix is:"<<endl;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<C[i][j]<<"  ";
			}
			cout<<endl;
		}
		return 0;
}

