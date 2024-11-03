#include <stdio.h>
#define pf printf

int main() {
  int num = 20;

  switch (num) {
    case 10: {
      pf("10");
      break;
    }
    case 20: {
      pf("20");
      break;
    }
    default: {
      pf("Wrong");
    }
  }
  pf("\nEnd ...");
  return 0;
}