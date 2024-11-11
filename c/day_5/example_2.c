#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  int arrays[3][3] = {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90}
  };
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      pf("%d ", arrays[i][j]);
    }
    pf("\n");
  }

  return 0;
}