#include <stdio.h>
#define pf printf

int main() {
  int arr[5] = {10, 20, 30, 40, 50};

  for (int i = 0; i < 5; i++) {
    pf("%d ", arr[i]);
  }

  return 0;
}