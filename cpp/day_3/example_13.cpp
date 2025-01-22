#include <iostream>
using namespace std;

/* 
  Passing arguments to constructor.
*/

class Calculator {
  public:
  int num1, num2;

  public: 
  Calculator(int num1, int num2) {
    this -> num1 = num1;
    this -> num2 = num2;
  }

  int add(int num1, int num2) {
    return num1 + num2;
  }
};

int main() {
  Calculator obj(100, 100);
  cout << "Ans: " << obj.add(obj.num1, obj.num2);
  return 0;
}