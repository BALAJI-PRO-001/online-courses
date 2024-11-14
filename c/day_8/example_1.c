#include <stdio.h>
#define pf printf
#define sf scanf

int getNumber();
int max(int, int, int);

int main() {
  int num1, num2, num3, ans;

  num1 = getNumber();
  num2 = getNumber();
  num3 = getNumber();

  pf("\nMax: %d\n", max(num1, num2, num3));

  ans = max(getNumber(), getNumber(), getNumber());
  pf("\nAns: %d", ans);

  return 0;
}

int getNumber() {
  int num;
  pf("Enter number: ");
  sf("%d", &num);
  return num;
}

int max(int num1, int num2, int num3) {
  if (num1 > num2 && num1 > num3) {
    return num1;
  } else if (num2 > num1 && num2 > num3) {
    return num2;
  } else {
    return num3;
  }
}