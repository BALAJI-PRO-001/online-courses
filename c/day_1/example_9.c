#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  /*
    Escape Sequence or non printable characters
    \n => newLine
    \t => tabSpace (4 space)
    \r => return
    \  => no name
  */

  pf("HI \n HI \n HI");
  pf("\n[\t\t\t\t\t]");
  pf("\nRam \r Kumar");
  pf("\nName: \"Ram\"");

  return 0;
}
