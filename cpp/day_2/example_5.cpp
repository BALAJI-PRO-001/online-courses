#include <iostream>
using namespace std;

/* 
  Function overloading 
  ====================
  Function overloading in C++ allows you to define multiple functions with the same name but different parameter lists. 
  The compiler determines which function to call based on the arguments passed to it.

  Key Points
  ==========
  Function Signature: 
  A function's signature is determined by its name and the number/type of its parameters.

  Return Type: 
  Function overloading does not consider the return type. The parameter list must differ.

  Advantages: 
  It improves code readability and reusability by allowing functions with similar behavior but different parameter types or counts.

*/

void add();
void add(int);
int add(int, int);
double add(double, double);

int main() {
  add();
  add(100);
  cout << "Ans: " << add(100, 100) << endl;
  cout << "Ans: " << add(100.0, 100.0);
  return 0;
}

void add() {
  cout << "HI" << endl;
}

void add(int num) {
  cout << "Number: " << num << endl;
}

int add(int num1, int num2) {
  return num1 + num2;
}

double add(double num1, double num2) {
  return num1 + num2;
}
