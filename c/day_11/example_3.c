#include <stdio.h>
#define pf printf
#define sf scanf

union UnionDemo {
  int num1, num2;  // 2
  int num3;     
};

struct StructDemo {
  int num1, num2;  // 2 * 3 => 6
  int num3;
};

union UnionDemo unionDemo;
struct StructDemo structDemo;

int main() {
  pf("Union size: %d", sizeof(unionDemo));
  pf("\nStruct size: %d", sizeof(structDemo));

  return 0;
}