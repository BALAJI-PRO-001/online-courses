#include <stdio.h>
#define pf printf
#define sf scanf

void message();

int main() {
  message();
  return 0;
}

void message() {
  if (1) {
    return;
  }
  pf("HI");
}
