#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  /*
    Looping Statement
    =================
    1) for 
    2) while 
    3) do while
  */

   /*             [1]        [2]                [4]
    Syntax: for (<init>; <condition>; <increment or decrement>) {
              [3] statements ....
            }
   */

  //  for (int i = 1; i <= 5; i++) {
  //     pf("HI");
  //  }

  // 1 + 2 + 3 + N
  int num, sum = 0;
  pf("Enter number: ");
  sf("%d", &num);
                   
  for (int i = 1; i <= num; i++) {
    sum = sum + i; 
  }
  
  pf("Sum: %d", sum);

  return 0;
}
