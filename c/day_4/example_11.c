#include <stdio.h>
#define pf printf
#define sf scanf

/*
  farr = [10, 20, 30];
  sarr = [10, 20, 30];
  sum =  [20, 40, 60];
*/

int main() {
  int farr[10], sarr[10], sum[10], num;

  pf("Enter Number: ");
  sf("%d", &num);

  for (int i = 0; i < num; i++) {
    pf("Enter Element farr[%d]: ", i);
    sf("%d", &farr[i]);
  }

  pf("\n");
  for (int i = 0; i < num; i++) {
    pf("Enter Element sarr[%d]: ", i);
    sf("%d", &sarr[i]);
  }

  for (int i = 0; i < num; i++) {
    sum[i] = farr[i] + sarr[i];
  }

  pf("\nFarr Elements: ");
  for (int i = 0; i < num; i++) {
    pf("%d ", farr[i]);
  }

  pf("\nSarr Elements: ");
  for (int i = 0; i < num; i++) {
    pf("%d ", sarr[i]);
  }

  pf("\nSum Arr Elements: ");
  for (int i = 0; i < num; i++) {
    pf("%d ", sum[i]);
  }
  return 0;
}