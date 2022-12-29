#include <iostream>
using namespace std;

void pass(int marks);
void fail(int marks);

main(){

  int marks;
  cout << "Enter Marks: ";
  cin >> marks;

  pass(marks);
  fail(marks);
}
void fail(int marks){
  if (marks < 50){
    cout << "You have failed";
}
}
void pass(int marks){
  if(marks > 50){
    cout << "You have passed";
}
}