#include <iostream>
using namespace std;
void eligibility(int Age);
main(){
  int Age;
  cout << "Enter your age: ";
  cin >>  Age;
  eligibility(Age);
}
void eligibility(Age){
  if (Age >=18){
    cout << "You are eligible";
}
}
void eligibility(Age){
  if (Age < 18){
    cout << "You are not eligible";
}
}