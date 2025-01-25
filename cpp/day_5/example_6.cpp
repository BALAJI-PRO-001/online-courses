#include <iostream>
using namespace std;

/*
  Single Inheritance.
*/

class A {
  public:
  int a;

  void printA() {
    cout << "A: " << a << endl;
  }
};


class B: public A {
  public: 
  int b;

  void printB() {
    cout << "B: " << b << endl;
  }
};

int main() {
  A a;
  a.a = 100;
  a.printA();

  B b;
  b.a = 200;
  b.b = 300;
  b.printA();
  b.printB();

  return 0;
}