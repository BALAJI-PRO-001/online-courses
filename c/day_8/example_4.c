#include <stdio.h>
#define pf printf
#define sf scanf

int isOddNumber(int);

int main() {

  if (isOddNumber(4)) {
    pf("Given number is odd number ....");
  } else {
    pf("Given number is even number ....");
  }
  
  return 0;
}

int isOddNumber(int num) {
  // return num % 2 == 0 ? 0 : 1;
  if (num % 2 == 0) {
    return 0;
  } 
  return 1;
}
