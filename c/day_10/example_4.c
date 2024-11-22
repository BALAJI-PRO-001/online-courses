#include <stdio.h>
#define pf printf
#define sf scanf

struct Outer {
  int num;

  struct Inner {
    int num;
  } inner;
};

struct Outer outer;

int main() {
  outer.num = 100;
  outer.inner.num = 200;

  pf("\nOuter -> num: %d", outer.num);
  pf("\nOuter -> Inner -> num: %d", outer.inner.num);
  return 0;
}