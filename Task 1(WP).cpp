#include <iostream>
using namespace std;
void add(int number1,int number2);
main()
{
	int number1;
	int number2;
	char choice;
	cout  <<  "Enter 1st number: ";
	cin  >>  number1;
	cout  <<  "Enter 2nd number: ";
	cin  >>  number2;
	cout  <<  "Enter Opreator: ";
	cin  >>  choice;
if(choice  ==  '+')
{
	add(number1,number2);
}
}
void add(int number1,int number2)
{
	int sum=number1+number2;
	cout  <<  "Sum is  "  <<  sum;
}