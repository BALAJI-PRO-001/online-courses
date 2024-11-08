#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  /*
      while (<condition>) {
        // statement
      }
  */

  // int i = 1;

  // while (i <= 10) {
  //   pf("HI"); 
  //   i ++;
  // }


  /* 
    i: 6
           6 <= 5
    while (i <= 5) {
      pf("HI"); 
      i ++;
    }

    output: HI HI HI HI HI
  */

  // 1 + 2 + 3 .... N
  int i = 1, sum = 0, num;
  pf("Enter Number: ");
  sf("%d", &num);

  while (i <= num) {
    sum = sum + i;
    i++;
  }
 
  pf("Ans: %d", sum);
  return 0;
}
