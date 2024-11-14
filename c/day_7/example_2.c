#include <stdio.h>
#define pf printf
#define sf scanf

/* Function without arguments and no return type. */

void add();

int main() {
  add();
  return 0;
}

void add() {
  int num1, num2;
  pf("Enter num1: ");
  sf("%d", &num1);

  pf("Enter num2: ");
  sf("%d", &num2);

  pf("Ans: %d", num1 + num2);
}