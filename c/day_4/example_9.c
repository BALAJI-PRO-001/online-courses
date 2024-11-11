#include <stdio.h>
#define pf printf
#define sf scanf

// [10, 0, 4, 0] => zeroCount: 2

int main() {
  int arr[10], count, zeroCount = 0;

  pf("Enter element count: ");
  sf("%d", &count);

  for (int i = 0; i < count; i++) {
    pf("Enter element arr[%d]:", i);
    sf("%d", &arr[i]);
  }

  for (int i = 0; i < count; i++) {
    if (arr[i] == 0) {
      zeroCount ++;
    }
  }

  pf("ZeroCount: %d", zeroCount);

  return 0;
}