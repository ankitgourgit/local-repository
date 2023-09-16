#include<iostream>
using namespace std;
class account
{
	char name[20];
	int amount;
	int withdrawal;
	int balance;
	public:
	     void open(void)
	     {
	     	cout<<"Enter the name of account holder:"<<endl;
	     	cin>>name;
	     	cout<<"Enter amount in rupees:"<<endl;
	     	cin>>amount;
		 }
		 void debit(void)
		 {
		 	cout<<"Enter the amount that you want to withdrawal:"<<endl;
		 	cin>>withdrawal;
		 }
		 void accbalance(void)
		 {
		 	balance=amount-withdrawal;
		 }	 
		 void display(void)
		 {
		 	cout<<"Name="<<name<<endl;
		 	cout<<"Amount="<<amount<<endl;
		 	cout<<"Balance="<<balance<<endl;
		 }
		 		
};
int main()
{
	account a1;
	a1.open();
	a1.debit();
	a1.accbalance();
	a1.display();
     return 0;
}

