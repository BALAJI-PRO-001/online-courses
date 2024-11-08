#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  /* 
            [1]       [2]             [4]
     for (<init>; <condition>; <increment or decrement>) {
              [1]       [2]             [4]
   [3]  for (<init>; <condition>; <increment or decrement>) {
          [3] // statement
        }
     }
  */

                 
  for (int i = 1; i <= 3; i++) {               
    for (int j = 1; j <=3; j++) {
      pf("%d ", j);                  
    }                              
    pf("\n");                        
  }                                 

  pf("\n\n");

  /* 
    *
    * *
    * * *
    * * * *
  */

  int num;
  pf("Enter number: ");
  sf("%d", &num);

  for (int i = 1; i <= num; i++) {
    for (int j = 1; j <= i; j++) {
      pf("* ");
    }
    pf("\n");
  }
                       
  return 0;
}
