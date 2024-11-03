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

   //        6     6 <= 5   M:6
   for (int i = 1; i <= 5; i++) {
      pf("HI");
   }
   //output: HIHIHIHIHI
  
  return 0;
}
