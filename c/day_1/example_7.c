#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  /* 
    const keyword used to declare constant variable.
    const variable data cannot modified programmatically.
  */
  const int num = 100;  // Integer constant
  const char ch = '@';  // Character constant
  const char string[] = "Admin"; // String constant
  const float fnum = 10.000;  // Float constant

  pf("\nNumber: %d", num); 
  pf("\nCharacter: %c", ch); 
  pf("\nString: %s", string); 
  pf("\nFloat: %f", fnum);
  return 0;
}
