#include <iostream>
using namespace std;

/*
  Access Specifiers
  =================

  Public
  ======
  Accessibility: Members declared as public are accessible from anywhere in the program, as long as an instance of the class is available.
  Use Case: Use it for methods or properties that need to be accessed outside the class.

  Private
  =======
  Accessibility: Members declared as private are accessible only within the class in which they are defined.
  Use Case: Use it for internal implementation details or sensitive data that should not be directly modified or accessed.


  Protected
  =========
  Accessibility: Members declared as protected are accessible within the class and its derived (child) classes.
  Use Case: Use it when you want to allow access to derived classes but prevent access from outside.


  +-------------------+------------------+-----------------------+-----------------------+
  | Access Specifier  | Access in Class | Access in Derived Class | Access Outside Class |
  +-------------------+------------------+-----------------------+-----------------------+
  | public            | Yes             | Yes                   | Yes                    |
  | private           | Yes             | No                    | No                     |
  | protected         | Yes             | Yes                   | No                     |
  +-------------------+------------------+-----------------------+-----------------------+

*/


class Add {
  public:
  int num1, num2;

  int add() {
    return num1 + num2;
  }
};


class Sub {
  private: 
  int num1, num2;

  public: 
  void setNum1(int num1) {
    this -> num1 = num1;
  }

  int getNum1() {
    return num1;
  }

  void setNum2(int num2) {
    this -> num2 = num2;
  }

  int getNum2() {
    return num2;
  }

  int sub() {
    // return getNum1() - getNum2();
    return num1 - num2;
  }
};


int main() {
  Add add;
  add.num1 = 100;
  add.num2 = 200;
  cout << "Add: " << add.add() << endl;

  // ================================
  Sub sub;
  sub.setNum1(100);
  sub.setNum2(200);

  cout << "Sub: " << sub.getNum1() - sub.getNum2() << endl;
  cout << "Sub: " << sub.sub() << endl;

  return 0;
}