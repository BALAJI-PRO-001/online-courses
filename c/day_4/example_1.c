#include <stdio.h>
#define pf printf
#define sf scanf

/* 
  Array
  =====
    * An array is a collection of elements stored in a contiguous memory location.
    * Arrays have a fixed size, meaning the number of elements cannot be changed after it's declared.
    * Elements in an array are accessed using an index, starting from 0 for the first element.
    * All elements in an array must be of the same data type (e.g., integers, strings).
    * You can access any element directly using its index, which gives arrays constant time complexity (O(1)) for access.
    
    Syntax: <dataType> <varName>[<size>] = {element, ....};
*/

int main() {
  int arr[5] = {10, 20, 30, 40, 50};
  // get element
  pf("Element: %d", arr[2]);

  // set element
  arr[4] = 500;
  pf("\n4th Element: %d", arr[4]);

  return 0;
}