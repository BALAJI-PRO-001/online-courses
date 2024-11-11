#include <stdio.h>
#define pf printf
#define sf scanf

// 10 + 20 + 30 ....N

int main() {
  int arr[10], count, sum = 0;

  pf("Enter element count: ");
  sf("%d", &count);

  for (int i = 0; i < count; i++) {
    pf("Enter element arr[%d]:", i);
    sf("%d", &arr[i]);
  }

  for (int i = 0; i < count; i++) {
    sum = sum + arr[i]; // sum += arr[i];
  }

  pf("\nSum: %d", sum);

  return 0;
}