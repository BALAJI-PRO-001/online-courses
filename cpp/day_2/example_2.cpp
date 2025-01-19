#include <iostream>
#include <cmath>
using namespace std;

/*
  Math functions in cpp
  =====================

  Required: #include <cmath>

  Example
  =======
  cout << "Max: " << max(10, 20);

  Functions
  =========
  
  Syntax: abs(<number>)
  doc: Returns the absolute value of x

  Syntax: min(<number>, <number>)
  doc: Used to find the lowest value of x and y.

  Syntax: max(<number>, <number>)
  doc: User to find the highest value of x and y.

  Syntax: pow(<baseValue>, <powerValue>)
  doc: Returns x raised to the power of y.

  Syntax: sqrt(<number>)
  doc: Returns the square root of x.
  
*/

int main() {
  cout << "Abs Number: " << abs(-5) << endl;
  cout << "Min Number: " << min(10, 20) << endl;
  cout << "Max Number: " << max(10, 20) << endl;
  cout << "Power Value: " << pow(2, 2) << endl;
  cout << "Sqrt Value: " << sqrt(16);
  return 0;
}