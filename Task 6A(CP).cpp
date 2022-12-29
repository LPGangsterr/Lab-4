#include <iostream>
using namespace std;
void calculateBill(string day,int amount);
main()
{
	int amount;
	string day;
	cout  <<  "Enter current day: ";
	cin  >>  day;
	cout  <<  "Enter current amount: ";
	cin  >>  amount;
	calculateBill(day,amount);
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
	cout  <<  "Your current Bill is "  <<  amount  <<  "."  << endl;
}
}
