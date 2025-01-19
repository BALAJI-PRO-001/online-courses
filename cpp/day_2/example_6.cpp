#include <iostream>
using namespace std;

/*
  Inline Function
  ================

  In C++, an inline function is a function that is expanded in line when it is called. 
  This means that instead of the normal function call mechanism (jump to function definition and back), 
  the compiler replaces the function call with the actual code of the function.
  
*/

inline int add(int num1, int num2) {
  return num1 + num2;
}

int main() {
  cout << "Ans: " << add(100, 100);
  return 0;
}