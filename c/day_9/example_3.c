#include <stdio.h>
#define pf printf
#define sf scanf

void message();

int main() {
  message();
  return 0;
}

void message() {
  pf("HI ");
  message();
}


