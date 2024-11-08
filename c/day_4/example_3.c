#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  int arr[10];

  for (int i = 0; i < 10; i++) {
    pf("Enter element arr[%d]: ", i);
    sf("%d", &arr[i]);
  }
  
  pf("\nArray Elements: ");
  for (int i = 0; i < 10; i++) {
    pf("%d ", arr[i]);
  }

  return 0;
}