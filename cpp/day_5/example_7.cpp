#include <iostream>
using namespace std;

/*
  Multiple Inheritance
  ====================
  One derived class inherits from multiple base classes.

  Example
  =======

    A   B
     \ /
      C
*/

class A {
  public:
  int a;

  void printA() {
    cout << "A: " << a << endl;
  }
};

class B {
  public:
  int b;

  void printB() {
    cout << "B: " << b << endl;
  }
};

class C: public A, public B {
  public:
  int c;

  void printC() {
    cout << "C: " << c << endl;
  }
};

int main() {
  A a;
  a.a = 100;
  a.printA();

  B b;
  b.b = 200;
  b.printB();

  C c;
  c.a = 100;
  c.b = 200;
  c.c = 300;
  c.printA();
  c.printB();
  c.printC();

  return 0;
}