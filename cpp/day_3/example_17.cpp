#include <iostream>
using namespace std;

/*
  Method overloading.
*/

class Calculator {
  public:
  void add() {
    cout << "HI" << endl;
  }

  void add(int num) {
    cout << "Number: " << num << endl;
  }

  int add(int num1, int num2) {
    return num1 + num2;
  }
  
  double add(double num1, double num2) {
    return num1 + num2;
  }
};

int main() {
  Calculator calculator;
  calculator.add();
  calculator.add(100);
  cout << "Ans: " << calculator.add(100, 100) << endl;
  cout << "Ans: " << calculator.add(100.0, 100.0) << endl;
  return 0;
}