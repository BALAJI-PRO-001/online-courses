#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  char names[10][30];
  int count;

  pf("Enter name count: ");
  sf("%d", &count);

  for (int i = 0; i < count; i++) {
    pf("Enter name %d: ", (i+1));
    sf("%s", &names[i]);
  }

  pf("\nNames: ");
  for (int i = 0; i < count; i++) {
    pf("%s ", names[i]);
  }
  return 0;
}