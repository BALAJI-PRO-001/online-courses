#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  /* 
    break and continue
  */
  // for (int i = 1; i <= 3; i++) {
  //   for (int j = 1; j <= 3; j++) {
  //     if (i == 2) {
  //       break;
  //     }
  //     pf("%d ", j);
  //   }
  //   pf("\n");
  // }

  for (int i = 1; i <= 10; i++) {
    if (i == 5) {
      continue;
    }
    pf("%d ", i);
  }

  return 0;
}