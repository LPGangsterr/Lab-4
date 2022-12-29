#include <iostream>
using namespace std;
void name(string Name);
main()
{
	string Name;
while(true)
{
	name(Name);
}
}
void name(string Name)
{
	cout  <<  "Enter your name: ";
	cin  >>  Name;
if (Name  ==  "Irzam")
{
while(true)
{
	cout  <<  Name  <<  endl;
}
}
if (Name  !=  "Irzam")
{
	cout  <<  "Enter your name: ";
	cin  >>  Name;
}
}
