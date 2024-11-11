#include <stdio.h>
#define pf printf
#define sf scanf

// Address: #ff234  Index: 0  Element: 10

int main() {
  int arr[10], count;

  pf("Enter element count: ");
  sf("%d", &count);

  for (int i = 0; i < count; i++) {
    pf("Enter element arr[%d]:", i);
    sf("%d", &arr[i]);
  }

  for (int i = 0; i < count; i++) {
    pf("\nAddress: %x  Index: %d  Element: %d", &arr[i], i, arr[i]);
  }

  return 0;
}