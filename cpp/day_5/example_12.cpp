#include <iostream>
using namespace std;

/*
  Hybrid Inheritance
  ==================
  Combination of two or more types of inheritance.

  Example
  =======
    A
   / \
  B   C 
   \ /
    D
*/

class A {
  public: 
  int a;

  void printA() {
    cout << "A: " << a << endl;
  }
};

class B: virtual public A {
  public: 
  int b;

  void printB() {
    cout << "B: " << b << endl;
  }
};

class C: virtual public A {
  public: 
  int c;

  void printC() {
    cout << "C: " << c << endl;
  }
};


class D: public B, public C {
  public: 
  int d;

  void printD() {
    cout << "D: " << d << endl;
  }
};

int main() {
  char line[] = "------------------------------";
  A a; 
  a.a = 100;
  a.printA();

  cout << line << endl;

  B b;
  b.a = 100;
  b.b = 200;
  b.printA();
  b.printB();

  cout << line << endl;

  C c;
  c.a = 100;
  c.c = 200;
  c.printA();
  c.printC();

  cout << line << endl;

  D d;
  d.a = 100;
  d.b = 200;
  d.c = 300;
  d.printA();
  d.printB();
  d.printC();

  return 0;
}