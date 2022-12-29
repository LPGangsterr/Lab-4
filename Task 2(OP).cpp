#include <iostream>
using namespace std;
void add(float number1,float number2);
void product(float number1,float number2);
void subtract(float number1,float number2);
void divide(float number1,float number2);
main()
{
	float number1;
	float number2;
	char choice;
	cout  << "Enter 1st number: ";
	cin  >>  number1;
	cout  << "Enter 2nd number: ";
	cin  >>  number2;
	cout  <<  "Enter your choice: ";
	cin  >>  choice;
if(choice  ==  '+')
{
	add(number1,number2);
}
if(choice  ==  '*')
{
	product(number1,number2);
}
if(choice  ==  '-')
{
	subtract(number1,number2);
}
if(choice  ==  '/')
{
	divide(number1,number2);
}
}
void add(float number1,float number2)
{
	float add=number1+number2;
	cout  <<  "Addition of given numbers is "  <<  add  <<  "."  <<  endl;
}
void product(float number1,float number2)
{
	float product=number1*number2;
	cout  <<  "Multiplication of given numbers is "  <<  product  <<  "."  <<  endl;
}
void subtract(float number1,float number2)
{
	float subtract=number1-number2;
	cout  <<  "Subtraction of given numbers is "  <<  subtract  <<  "."  <<  endl;
}
void divide(float number1,float number2)
{
	float divide=number1/number2;
	cout  <<  "Division of given numbers is "  <<  divide  <<  "."  <<  endl;
}
