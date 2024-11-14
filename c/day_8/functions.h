#include <stdio.h>
#define pf printf
#define sf scanf

int getNumber() {
  int num;
  pf("Enter number: ");
  sf("%d", &num);
  return num;
}


int max(int num1, int num2, int num3) {
  if (num1 > num2 && num1 > num3) {
    return num1;
  }

  if (num2 > num1 && num2 > num3) {
    return num2;
  }

  return num3;
}