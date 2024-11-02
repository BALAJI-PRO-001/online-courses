#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  /*
    Decision-making control statements
    1. Simple if statement
    2. If-else statements
    3. Nested if-else statements
    4. else-if ladder
  */

  // Syntax: <condition> ? <TruePart> : <FalsePart> ;
  int num = 10;
  num = num == 10 ? 200 : num;
  pf("Number: %d", num);

  num == 200 ? pf("HI") : pf("NO");

  return 0;
}
