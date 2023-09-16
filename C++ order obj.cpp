#include<iostream>
using namespace std;

const int m=50;

class item
{
	int itemcode[m];
	float itemprice[m];
	int count;
	
	public :
		void cnt(void) {count=0;}
		void getitem(void);
		void displaysum(void);
		void remove(void);
		void displayitem(void);
};
void item :: getitem(void)
{
	cout<<"Enter item code: "<<endl;
	cin>>itemcode[count];
	
	cout<<"Enter item price: "<<endl;
	cin>>itemprice[count];
	count++;
}
void item :: displaysum(void)
{
	float sum=0;
	for(int i=0; i<count; i++)
	    sum=sum+itemprice[i];
	cout<<"Total value:"<<endl;
}
void item :: remove(void)
{
	int a;
	cout<<"Enter item code:"<<endl;
	cin>>a;
	
	for(int i=0; i<count; i++)
    if (itemcode[i] ==a)
	    itemprice[i]=0;
}
void item :: displayitem(void)
{
	int count;
	cout<<"Code price"<<endl;
	for(int i=0; i<count; i++)
	{
		cout<<"\n"<< itemcode[i];
		cout<<"   "<< itemprice[i];
	}
		cout<<"\n";
}

int main()
{
	item order;
	order.cnt();
	int x;
	do
	{
		cout<<"\nYou can do the following:"<<"Enter the appropriate number\n";
		cout<<"\n1: Add an item";
		cout<<"\n2: Display total value";
		cout<<"\n3: Delete an item";
		cout<<"\n4: Display all items";
		cout<<"\n5: quit";
		
		cin>> x;
		
		switch(x)
		{
			case 1 : order.getitem(); break;
			case 2 : order.displaysum(); break;
			case 3 : order.remove(); break;
			case 4 : order.displayitem(); break;
			case 5 : break;
			default : cout <<"Error in input; try again\n" ;
		}
		
	}while (x != 5);
		
		return 0;
}
