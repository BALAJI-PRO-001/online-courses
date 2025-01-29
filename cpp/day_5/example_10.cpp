#include <iostream>
using namespace std;

/*
  Hierarchical Inheritance
  ========================
  Multiple classes inherit from a single base class.

  Example
  =======
     A
    / \
   B   C
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

class C: public A {
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
  b.a = 100;
  b.b = 200;
  b.printA();
  b.printB();

  C c;
  c.a = 100;
  c.c = 200;
  c.printA();
  c.printC();
  return 0;
}