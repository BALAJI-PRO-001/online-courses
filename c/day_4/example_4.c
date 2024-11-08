#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  char name[5] = {'a', '1', '@', '3', '8'};
  pf("Character[0]: %c", name[0]);
  name[4] = 't';
  pf("\nCharacter[4]: %c", name[4]);

  /*
    for (int i = 0; i < 5; i++) {
      pf("%c ", name[i]);
    }
  */
  return 0;
}