#include <iostream>
using namespace std;

class Calculator {
  public: 
  int getNum();
  int add(int num1, int num2);
  int sub(int num1, int num2);
  int mul(int num1, int num2);
  int div(int num1, int num2);
};

int Calculator::getNum() {
  int num;
  cout << "Enter num: ";
  cin >> num;
  return num;
}

int Calculator::add(int num1, int num2) {
  return num1 + num2;
}

int Calculator::sub(int num1, int num2) {
  return num1 - num2;
}

int Calculator::mul(int num1, int num2) {
  return num1 * num2;
}

int Calculator::div(int num1, int num2) {
  return num1 / num2;
}


int main() {
  Calculator calculator;
  int num1, num2;

  num1 = calculator.getNum();
  num2 = calculator.getNum();

  cout << "Add: " << calculator.add(num1, num2) << endl;
  cout << "Sub: " << calculator.sub(num1, num2) << endl;
  cout << "Mul: " << calculator.mul(num1, num2) << endl;
  cout << "Div: " << calculator.div(num1, num2);
  
  return 0;
}