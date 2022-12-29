# include <iostream>
using namespace std;
void add(int number1,int number2);
main()
{
	int  number1;
	int  number2;
	add(5,5);
}

void add(int number1,int number2)
{
	int sum=number1+number2;
	cout  <<  "Sum is  "  <<  sum;
}
