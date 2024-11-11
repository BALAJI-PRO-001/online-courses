#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  int row, col, arr[10][10];

  pf("Enter row: ");
  sf("%d", &row); 

  pf("Enter col: ");
  sf("%d", &col); 

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      pf("Enter element arr[%d][%d]: ", i, j);
      sf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      pf("%d ", arr[i][j]);
    }
    pf("\n");
  }

  return 0;
}