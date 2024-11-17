#include <stdio.h>
#define pf printf
#define sf scanf

void getArrElements(int [], int);
void printArrElements(int [], int);
int indexOf(int [], int, int);

int main() {
  int arr[10], num, target;

  pf("Enter elements count: ");
  sf("%d", &num);

  getArrElements(arr, num);

  pf("\nEnter target element: ");
  sf("%d", &target);

  printArrElements(arr, num);

  pf("\nIndex: %d", indexOf(arr, target, num));

  return 0;
}

void getArrElements(int arr[], int num) {
  pf("\n");
  for (int i = 0;  i < num; i++) {
    pf("Enter element arr[%d]: ", i);
    sf("%d", &arr[i]);
  }
}

void printArrElements(int arr[], int num) {
  for (int i = 0; i < num; i++) {
    pf("\nIndex: [%d]  Element: %d", i, arr[i]);
  }
}


int indexOf(int arr[], int target, int num) {
  for (int i = 0; i < num; i++) { 
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}