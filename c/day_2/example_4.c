#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  /*
    Decision-making control statements
    3. Nested if-else statements
  */

  int num = 100;

  if (num == 100) {
    if (num == 100) {
      pf("HI");
    } else {
      pf("NO");
    }
  } else {
    if (1) {
      pf("1");
    } else {
      pf("0");
    }
  }

  pf("\nEnd ...");
  return 0;
}
