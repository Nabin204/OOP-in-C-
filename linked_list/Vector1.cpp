#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	v.push_back(4);
	v.push_back(78);
	v.push_back(80);
	v.push_back(100);
	v.push_back(56);
	cout<<"The elements in vector v are:"<<endl;
cout<<v.at(1)<<endl;
cout<<v.at(4)<<endl;
cout<<v.at(5)<<endl;
	cout<<"Capacity:"<<v.capacity()<<endl;
	cout<<"The size of vector is:"<<v.size()<<endl;
	return 0;
}
