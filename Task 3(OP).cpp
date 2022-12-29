#include <iostream>
using namespace std;
main()
{
	int marks;
	cout  <<  "Enter your marks: ";
	cin  >>  marks;
if (marks >50)
{
	cout  <<  "You have passed.";
}
if (marks < 51)
{
	cout  <<  "You have failed.";
}
}