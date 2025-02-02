#include <iostream>
using namespace std;

/*
      *
     **
    ***
   ****
*/

void printPattern(int);

int main() {
  int num = 5;

  // for (int i = num; i > 0; i--) {
  //   for (int j = 1; j <= num; j++) {
  //     if (j >= i) {
  //       cout << "* "; 
  //     } else {
  //       cout << "  ";
  //     }
  //   }
  //   cout << endl;
  // }

  printPattern(10);
  printPattern(num);
  return 0;
}

void printPattern(int num) {
  for (int i = num; i > 0; i--) {
    for (int j = 1; j <= num; j++) {
      if (j >= i) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
}