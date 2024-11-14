#include <stdio.h>
#define pf printf
#define sf scanf

// 1 + 2 + .... N
int sumOfNaturalNums(int);

int main() {

  pf("Ans: %d", sumOfNaturalNums(5));

  return 0;
}

int sumOfNaturalNums(int num) {
  int sum = 0;
  for (int i = 1; i <= num; i++) {
    sum = sum + i; // sum += i;
  }
  return sum;
}