#include <stdio.h>
#define pf printf
#define sf scanf

int num = 100;

void printNumber() {
  pf("\nPrintNumber -> Number: %d", num);
}

int main() {
  pf("Main -> Number: %d", num);
  printNumber();
  return 0;
}