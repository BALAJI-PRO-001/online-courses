#include <iostream>
using namespace std;

/*
  Constructor overload. 
  (or) 
  Multiple constructor.
*/

class Calculator {
  public:
  Calculator() {
    cout << "Empty cons called ..." << endl;
  }

  Calculator(int num) {
    cout << "Number: " << num << endl;
  }

  Calculator(int num1, int num2) {
    cout << "Ans: " << num1 + num2 << endl;
  }

  Calculator(double num1, double num2) {
    cout << "Ans: " << num1 + num2 << endl;
  }
};

int main() {
  Calculator o1;
  Calculator o2(100);
  Calculator o3(100, 100);
  Calculator o4(100.0, 100.0);
  return 0;
}