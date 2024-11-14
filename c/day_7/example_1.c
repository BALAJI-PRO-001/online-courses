#include <stdio.h>
#define pf printf
#define sf scanf

  /*
    What is a Function?
    ===================
    A function is a block of organized, reusable code used to perform a single, related action. 
    Functions help break down a program into smaller, manageable, and reusable parts.
    Functions take input, perform specific operations, and may return a result.
  
    Types of Function
    =================
    1) Pre define functions. => gets(), puts()
    2) User define functions.

    Types of user define functions.
    ===============================
    1) Function without arguments and no return type.
    2) Function with arguments and no return type.
    3) Function with arguments and return type.
    4) Function without arguments and return type.

    Syntax: 
      <returnType> <functionName> (<arg1>, ....) {
        // statement ...
      }

  */

void message();

int main() {
  message();
  message();
  message();

  for (int i = 1; i <= 10; i++) {
    message();
  }
  return 0;
}

void message() {
  pf("\nHI");
}