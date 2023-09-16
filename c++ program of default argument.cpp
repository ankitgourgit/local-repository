#include<iostream>
using namespace std;

float moneyrecived(int currentmoney , float factor=1.04)
{
    return currentmoney*factor;
}
int main()
{
int money=100000;
cout<<"if you have "<<money<<" in your account,you will recive "<<moneyrecived(money)<<" rs after 1 year";
}
