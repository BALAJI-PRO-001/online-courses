#include <iostream>
using namespace std;

/* 
  <return-type> <function-name> (<arg,...>) {
    // statement
  }
*/

void sayHI();
void add(int, int);
int sub(int, int);
int getNum();

void demo();


int main() {
  // sayHI();
  // add(100, 100);
  // add(200, 200);
  // int ans = sub(100, 100);
  // cout << "Ans: " << ans;

  // cout << "Ans: " << getNum();
  demo();
  return 0;
}

void sayHI() {
  cout << "HI" << endl;
}

void add(int num1, int num2) {
  cout << "Ans: " << num1 + num2 << endl;
}

int sub(int num1, int num2) {
  return num1 - num2;
} 

int getNum() {
  return 1000;
}

void demo() {
  if (0) return;
  cout << "Start ...." <<endl;
  cout << "Running ...." << endl;
  cout << "End ...." << endl;
}