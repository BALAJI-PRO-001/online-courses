#include <stdio.h>
#define pf printf
#define sf scanf

// [10, 20, 30, 40] => max: 40
// [10, 20, 30, 40] => min: 10

int main() {
  int arr[10], count, max, min;

  pf("Enter element count: ");
  sf("%d", &count);

  for (int i = 0; i < count; i++) {
    pf("Enter element arr[%d]:", i);
    sf("%d", &arr[i]);
  }
  max = arr[0];
  min = arr[0];
  // max = min = arr[0];

  for (int i = 0; i < count; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }

  for (int i = 0; i < count; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }

  pf("Max: %d", max);
  pf("\nMin: %d", min);
  return 0;
}