#include <stdio.h>
#define pf printf
#define sf scanf

/* Function with arguments and return type. */

int add(int, int);

int main() {
  int num1 = 100, num2 = 100, ans;

  ans = add(num2, num1);
  pf("Ans: %d", ans);
  pf("\nAns: %d", add(10, 20));

  ans = add(add(10, 10), add(10, 10));
  pf("\nAns: %d", ans);

  return 0;
}

int add(int num1, int num2) {
  return num1 + num2;
}