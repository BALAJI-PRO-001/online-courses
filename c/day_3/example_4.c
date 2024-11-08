#include <stdio.h>
#define pf printf

int main() {
  /*
    do {
      // statement
    } while (<condition>);
  */
  
  int i = 1;
  do {
    pf("%d ", i);
    i++;
  } while (i <= 5);

  return 0;
}