#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  int arrays[3][3] = {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90}
  };

  // get element
  pf("Element: %d", arrays[2][2]);

  // set element
  arrays[2][2] = 900;
  pf("\nArr[2][2]: %d", arrays[2][2]);
  return 0;
}