#include <stdio.h>
#define pf printf
#define sf scanf

void get2DArrElements(int [10][10], int, int);
void print2DArrElements(int [10][10], int , int);
void add2DArrElements(int [10][10], int [10][10], int [10][10], int, int);

int main() {
  int farr[10][10], sarr[10][10], sumArr[10][10], row, col;

  pf("Enter row: ");
  sf("%d", &row);

  pf("Enter col: ");
  sf("%d", &col);

  get2DArrElements(farr, row, col);
  get2DArrElements(sarr, row, col);

  add2DArrElements(farr, sarr, sumArr, row, col);

  print2DArrElements(farr, row, col);
  print2DArrElements(sarr, row, col);
  print2DArrElements(sumArr, row, col);

  return 0;
}

void get2DArrElements(int arr[10][10], int row, int col) {
  pf("\n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      pf("Enter element arr[%d][%d]: ", i, j);
      sf("%d", &arr[i][j]);
    }
  }
}

void print2DArrElements(int arr[10][10], int row, int col) {
  pf("\n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      pf("%d ", arr[i][j]);
    }
    pf("\n");
  }
}


void add2DArrElements(
  int farr[10][10], 
  int sarr[10][10], 
  int sumArr[10][10], 
  int row, int col
) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      sumArr[i][j] = farr[i][j] + sarr[i][j];
    }
  }
}