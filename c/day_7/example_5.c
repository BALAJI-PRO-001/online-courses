#include <stdio.h>
#define pf printf
#define sf scanf

/* Function without arguments and return type */

int add();

int main() {
  int ans;
  ans = add();
  pf("Ans: %d", ans);
  pf("\nAns: %d", add());
  return 0;
}

int add() {
  int num1 = 10, num2 = 20;
  return num1 + num2;
}