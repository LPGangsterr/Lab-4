#include <iostream>
using namespace std;
void isGreater(int number1,int number2);
main()
{
	int number1;
	int number2;
	cout  <<  "Enter 1st number: ";
	cin  >>  number1;
	cout  <<  "Enter 2nd number: ";
	cin  >>  number2;
	isGreater(number1,number2);
}
void isGreater(int number1,int number2)
{
if(number1  >  number2)
{
	cout  <<  number1  <<  " is greater.";
}
if(number1  <  number2)
{
	cout  <<  number2  <<  " is greater.";
}
}
