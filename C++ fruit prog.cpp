#include<iostream>
using namespace std;
class fruit
{
	char name[20];
	int price;
	
public:
   void getmydata(void);
   void displaydata(void);
};
void fruit :: getmydata(void)
{
    cout<<"Enter name of Fruit:";
    cin>>name;
    cout<<"Enter the price:";
    cin>>price;
}
void fruit :: displaydata(void)
{
	cout<<"\nName of fruit=" <<name;
	cout<<"\nPrice of fruit=" <<price;
}
int main()
{
	fruit f;
	f.getmydata();
	f.displaydata();
	return 0;
}
