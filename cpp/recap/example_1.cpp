#include <iostream>
using namespace std;

/* 
  Loops in cpp
  ============
  for, while, do-while, for auto
*/

int main() {

  // for (int i = 1; i <= 5; i++) {
  //   cout << i;
  // }

  // for (int i = 1; i <= 3; i++) {
  //   for (int j = 1; j <= 3; j++) {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  // int i = 1;
  // while (i <= 3) {
  //   cout << i << "";
  //   i++;
  // }

  // int i = 1, j = 1;
  // while (i <= 3) {
  //   j = 1;
  //   while (j <= 3) {
  //     cout << j << " ";
  //     j++; 
  //   }
  //   cout << endl;
  //   i++;
  // }

  // int i = 1;
  // do {
  //   cout << i << " ";
  //   i++;
  // } while(i <= 3);

  int arr[] = { 10, 20, 30, 40, 50 };
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  for (auto element : arr) {
    cout << element << " ";
  }

  return 0;
}