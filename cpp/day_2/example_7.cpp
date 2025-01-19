#include <iostream>
using namespace std;

/*
  Default arguments
  =================
  In C++, default arguments allow you to specify default values for one or more parameters of a function. 
  When calling such a function, if you omit some arguments, the compiler uses the provided default values.
*/

int add(int num1 = 100, int num2 = 100) {
  return num1 + num2;
}

int main() {
  cout << "Ans: " << add(100) << endl;
  cout << "Ans: " << add() << endl;
  cout << "Ans: " << add(500, 500) << endl;
  cout << "Ans: " << add(500);
  return 0;
}