#include<iostream>
using namespace std;
int main()
{
	enum days {
		sunday=1,
		monday,
		tuesday,
		wednesday,
		thrusday,
		friday,
		saturday
	};
	days d;
	int n;
	cout<<"Enter the numbers from 1 to 7:";
	cin>>n;
	d=days(n);
	if(d==sunday || d==saturday)
		cout<<"Enjoy! Today is holiday."<<endl;
		else
		cout<<"Sorry! Today is working day."<<endl;
	return 0;
}
