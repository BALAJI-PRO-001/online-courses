#include <stdio.h>
#define pf printf
#define sf scanf

/* Function with arguments and no return type. */

void add(int, int);

int main() {
  int num1 = 100, num2 = 100;

  add(num1, num2);
  add(10, 20);

  return 0;
}

void add(int a, int b) {
  pf("\nAns: %d", a + b);
}