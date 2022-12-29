#include <iostream>
using namespace std;
void oddOrEven(int number);
main()
{
	int number;
	cout << "Enter your number: ";
	cin >> number;
	oddOrEven(number);
}
void oddOrEven(int number)
{
if (number %2 == 0)
{
	cout << "The number is even.";
}
if (number % 2 != 0)
{
	cout << "The number is odd.";
}
}