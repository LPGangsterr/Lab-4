#include <iostream>
using namespace std;
main()
{
	int amount;
	string day;
	cout  <<  "Enter your amount:  ";
	cin  >>  amount;
	cout  <<  "Enter current day:  ";
	cin  >>  day;
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