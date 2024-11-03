#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf

int main() {
  char line[] = "\n=================================================\n";
  int num1, num2, choice;

  pf("%s", line);
  pf("\t\t\tMenu");
  pf("%s", line);

  pf("Add: \t\t\t\t\t Press: 1");
  pf("\nSub: \t\t\t\t\t Press: 2");
  pf("\nMul: \t\t\t\t\t Press: 3");
  pf("\nDiv: \t\t\t\t\t Press: 4");
  pf("\nMod: \t\t\t\t\t Press: 5");   
  pf("%s", line);

  pf("Enter your choice: ");
  sf("%d", &choice); 

  if (choice < 1 || choice > 5) {
    pf("\nWrong choice ...");
    exit(0);
  }

  pf("Enter number 1: ");
  sf("%d", &num1);

  pf("Enter number 2: ");
  sf("%d", &num2);

  switch (choice) {
    case 1: {
      pf("\nAns: %d", num1 + num2);
      break;
    }
    case 2: {
      pf("\nAns: %d", num1 - num2);
      break;
    }
    case 3: {
      pf("\nAns: %d", num1 * num2);
      break;
    }
    case 4: {
      pf("\nAns: %d", num1 / num2);
      break;
    }
    case 5: {
      pf("\nAns: %d", num1 % num2);
      break;
    }
    default: {
      pf("\nWrong choice ...");
    }
  }

  return 0;
}
