#include<iostream>
using namespace std;
int main()
{
	void* ptr;
	int number=9;
	ptr=&number;
	cout<<"Using pointer, the address of number 9 is:"<<ptr<<endl;
	cout<<"Using &operator, the address of number 9 is:"<<&number<<endl;
	cout<<"The number is:"<<*(int*)ptr<<endl;
	//*ptr does not give the value of the variable to which the pointer points
	// this causes error only in void pointers
	return 0;
}
