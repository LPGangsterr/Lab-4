#include <iostream>
using namespace std;
void calculateBill(string day,int amount);
main()
{
	int amount;
	string day;
while(true)
{
	cout  <<  "Enter your amount:  ";
	cin  >>  amount;
	cout  <<  "Enter current day:  ";
	cin  >>  day;
	calculateBill(day,amount);
}
}
void calculateBill(string day,int amount)
{
if(day  ==  "sunday")
{
	int discount;
	discount=amount*0.1;
	amount=amount-discount;
	cout  <<  "Your current Bill is "  <<  amount  <<  "."  <<  endl;
}
if(day  !=  "sunday")
{
	int discount;
	discount=amount*5/100;
	amount=amount-discount;
	cout  <<  "Your current Bill is "  <<  amount  <<  "."  << endl;
}
}