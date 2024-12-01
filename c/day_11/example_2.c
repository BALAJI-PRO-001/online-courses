#include <stdio.h>
#define pf printf
#define sf scanf

union UnionDemo {
  int num1, num2; 
  int num3;     
};

struct StructDemo {
  int num1, num2;
  float num3;
};

union UnionDemo unionDemo;
struct StructDemo structDemo;

int main() {
  unionDemo.num1 = 100;

  structDemo.num1 = 100;
  structDemo.num2 = 200;
  structDemo.num3 = 300.00;

  pf("Struct -> num1: %d", structDemo.num1);
  pf("\nStruct -> num2: %d", structDemo.num2);
  pf("\nStruct -> num3: %f", structDemo.num3);

  pf("\n\nUnion -> num1: %d", unionDemo.num1);
  pf("\nUnion -> num2: %d", unionDemo.num2);
  pf("\nUnion -> num3: %d", unionDemo.num3);

  return 0;
}