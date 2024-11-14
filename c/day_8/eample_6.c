#include <stdio.h>
#define pf printf
#define sf scanf
#include "functions.h"

int main() {
  int num1, num2, num3;

  num1 = getNumber();
  num2 = getNumber();
  num3 = getNumber();

  pf("\nMax: %d", max(num1, num2, num3));
  return 0;
}