#include <stdio.h>
#define pf printf
#define sf scanf

void getArrElements(int [], int);
void printArrElements(int [], int);
void addArrElements(int [], int [], int[], int);

int main() {
  int farr[10], sarr[10], sumArr[10], num;

  pf("Enter elements count: ");
  sf("%d", &num);

  getArrElements(farr, num);
  getArrElements(sarr, num);

  addArrElements(farr, sarr, sumArr, num);

  printArrElements(farr, num);
  printArrElements(sarr, num);
  printArrElements(sumArr, num);

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
  pf("\nArray Elements: ");
  for (int i = 0; i < num; i++) {
    pf("%d ", arr[i]);
  }
}


void addArrElements(int farr[], int sarr[], int sumArr[], int num) {
  for (int i = 0; i < num; i++) {
    sumArr[i] = farr[i] + sarr[i];
  }
}