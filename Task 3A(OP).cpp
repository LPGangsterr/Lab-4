#include <iostream>
using namespace std;
void passOrFail(int marks);
main()
{
	int marks;
	cout  <<  "Enter your marks: ";
	cin  >>  marks;
	passOrFail(marks);
}
void passOrFail(int marks)
{
if (marks >50)
{
	cout  <<  "You have passed.";
}
if (marks < 51)
{
    cout  <<  "You have failed.";
}
}