#include <iostream>
using namespace std;

/*
  Multilevel Inheritance
  ======================
  A class is derived from another derived class (chain of inheritance).

  Example
  ========
     A
     |
     B
     |
     C
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

class C: public B {
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
  c.b = 200;
  c.c = 300;
  c.printA();
  c.printB();
  c.printC();
  return 0;
}