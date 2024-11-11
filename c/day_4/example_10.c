#include <stdio.h>
#define pf printf
#define sf scanf

// [1, 2, 3, 4] => Even: 6

int main() {
  int arr[10], count, sum = 0;

  pf("Enter element count: ");
  sf("%d", &count);

  for (int i = 0; i < count; i++) {
    pf("Enter element arr[%d]:", i);
    sf("%d", &arr[i]);
  }

  for (int i = 0; i < count; i++) {
    if (arr[i] % 2 == 0) {
      sum = sum + arr[i];
    }
  }

  pf("Sum of even number: %d", sum);

  return 0;
}