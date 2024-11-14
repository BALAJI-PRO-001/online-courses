#include <stdio.h>
#define pf printf
#define sf scanf

int getNumber() {
  int num;
  pf("Enter number: ");
  sf("%d", &num);
  return num;
}

float avg(int num1, int num2) {
  return (num1 + num2) / 2;
}

int main() {
  int num1, num2;
  
  num1 = getNumber();
  num2 = getNumber();

  pf("Avg: %f", avg(num1, num2));
  return 0;
}

