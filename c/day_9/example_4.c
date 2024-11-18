#include <stdio.h>
#define pf printf
#define sf scanf

int sumOfDigit(int);

int main() {
  pf("Ans: %d", sumOfDigit(123));
  return 0;
}
                    
// int sumOfDigit(int num) {
//   int rem, sum = 0;

//   while (num > 0) {
//     rem = num % 10; 
//     sum = sum + rem; 
//     num = num / 10; 
//   }

//   return sum;
// }


int sumOfDigit(int num) {
  if (num == 0) {
    return 0;
  }
  return (num % 10) + sumOfDigit(num / 10);
}
