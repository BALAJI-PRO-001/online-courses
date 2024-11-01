#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  /*
    Arithmetic operators
    Unary operators
    Assignment operators
    Comparison operators
    Logical operators
  */

  // Arithmetic operators: +, -, *, /, %
  pf("Add: %d", 10 + 10);
  pf("\nSub: %d", 10 - 10);
  pf("\nMul: %d", 10 * 10);
  pf("\nDiv: %d", 10 / 5);
  pf("\nMod: %d", 10 % 2);

  // Unary operators: ++, --
  int num = 10;
  num ++;  // => 11  Valid: num = num + 1;
  num --;  // => 10  Valid: num = num - 1;
  pf("\n\nNumber: %d", num);

  // Post Increment, Decrement 
  int a = 10;
  a ++; // 10 + 1 => 11
  a --; // 11 - 1 => 10
  pf("A: %d", a --); // 10 - 1 => 9

  // Pre Increment, Decrement
  int b = 10;
  ++ b; // 10 + 1 => 11
  -- b; // 11 - 1 => 10
  pf("B: %d", -- b); // 10 + 1 => 11
  
  return 0;
}
