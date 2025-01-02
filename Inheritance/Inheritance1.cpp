#include <iostream>
using namespace std;
class birds
{
	public:
		birds()
		{
		cout<<"Birds eat food."<<endl;
	}
};
class parrot : public birds
{
	public:
		parrot(){
		cout << "Parrot can fly."<<endl;
	}
};
class ostrich
{
	public:
		ostrich()
		{
		cout << "Ostrich cannot fly."<<endl;
	}
};
int main()
{
	parrot p;
	ostrich o;
	
}
