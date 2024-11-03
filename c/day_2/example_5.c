#include <stdio.h>
#define pf printf

int main() {
  int num = 20;

  if (num == 10) {
    pf("10");
  } else if (num == 20) {
    pf("20");
  } else if (num == 30) {
    pf("30");
  } else {
    pf("No");
  }

  pf("\nEnd ...");

  return 0;
}