#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  int num = 10;
  num += 100; // 110

  if (num != 110) {
    pf("\nYes");
    if (num != 100) {
      num ++;
    } else {
      num = 200;
    }
  }

  switch (200) {
    case 200: {
      num = 200; // 110 -> 200
    }
    case 201: {
      num ++; // 200 -> 201
    } 
    default: {
      num = 300; // 201 -> 300
    }
  }

  if (num != 200) {
    num ++; // 300 -> 301
  } else {
    num = num == 200 ? num : num;
  }

  pf("\nNumber: %d", num); // 301

  return 0;
}
