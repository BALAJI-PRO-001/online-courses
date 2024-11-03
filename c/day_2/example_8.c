#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf

int main() {
  char line[] = "\n=================================================\n";
  int num, choice;

  pf("%s", line);
  pf("\t\t\tMenu");
  pf("%s", line);

  pf("O | E: \t\t\t\t\t Press: 1");
  pf("\nP | N: \t\t\t\t\t Press: 2");
  pf("\nL | N: \t\t\t\t\t Press: 3");  
  pf("%s", line);

  pf("Enter your choice: ");
  sf("%d", &choice); 

  if (choice < 1 || choice > 5) {
    pf("\nWrong choice ...");
    exit(0);
  }

  pf("Enter number: ");
  sf("%d", &num);

  switch (choice) {
    case 1: {
      if (num % 2 == 0) {
        pf("\nEven number ...");
      } else {
        pf("\nOdd number ....");
      }
      break;
    }
    case 2: {
      if (num < 0) {
        pf("\nNegative number ....");
      } else {
        pf("\nPositive number ....");
      }
      break;
    }
    case 3: {
      if (num % 4 == 0) {
        pf("\nLeap year ....");
      } else {
        pf("\nNot leap year ....");
      }
      break;
    }
    default: {
      pf("\nWrong choice ...");
    }
  }

  return 0;
}
