#include<iostream>
#include<string.h>
using namespace std;
class bank
{
	private:
		char account_name[30],account_type[15];
		int bal,deposit_amt,withdraw_amt;
		long long int acc_no;
		public:
			bank()
			{
				cout<<"Enter account name:";
				cin.getline(account_name,30);
				cout<<"Enter account type:";
				cin>>account_type;
				cout<<"Enter account number:";
				cin>>acc_no;
				cout<<"Enter opening balance:";
				cin>>bal;
			}
			void deposit()
			{
				cout<<"Enter the amount to deposit:";
				cin>>deposit_amt;
				bal=bal+deposit_amt;
		}
		void withdraw()
		{
			cout<<"Enter the amount to withdraw:";
			cin>>withdraw_amt;
			if(bal>withdraw_amt)
			{
				cout<<"Your withdrawl is successful."<<endl;
			}
			else
			{
				cout<<"Sorry! you do not have enough balance to withdraw."<<endl;
				withdraw_amt=0;
			}
		}
		void display()
		{
			cout<<"The account name is:"<<account_name<<endl;
			cout<<"The account type is:"<<account_type<<endl;
			cout<<"The account number is:"<<acc_no<<endl;
			cout<<"The opening balance is:"<<(bal-deposit_amt)<<endl;
			cout<<"The balance after deposit is:"<<bal<<endl;
			cout<<"The remaining balance is:"<<(bal-withdraw_amt)<<endl;
		}
};
int main()
{
	bank b;
	b.deposit();
	b.withdraw();
	b.display();
	return 0;
}
