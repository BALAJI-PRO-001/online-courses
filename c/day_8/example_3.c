#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf

int calculate(int, int, char);

int main() {

  pf("Add: %d", calculate(10, 10, '+'));
  pf("\nSub: %d", calculate(10, 10, '-'));
  pf("\nMul: %d", calculate(10, 10, '*'));
  pf("\nDiv: %d", calculate(10, 10, '/'));
  pf("\nMod: %d", calculate(10, 10, '%'));

  return 0;
}

int calculate(int num1, int num2, char option) {
  if (
    option == '+' || option == '-' ||
    option == '*' || option == '/' || 
    option == '%'
  ) {
    if (option == '+') {
      return num1 + num2;
    } 

    if (option == '-') {
      return num1 - num2;
    }

    if (option == '*') {
      return num1 * num2;
    }

    if (option == '/') {
      return num1 / num2;
    }

    if (option == '%') {
      return num1 % num2;
    }
  } else {
    pf("Error: Invalid option ...");
    exit(0);
  }
}