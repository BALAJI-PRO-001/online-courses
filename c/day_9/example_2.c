#include <stdio.h>
#define pf printf
#define sf scanf

int num = 1;

void increment() {
  pf("\nNumber: %d", num);
  num ++;
}


int main() {
  increment();
  increment();
  increment();
  return 0;
}