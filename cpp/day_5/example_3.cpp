#include <iostream>
using namespace std;

/*
  Private Access specifier in inheritance.
*/

class A {
  private: 
  int a;

  public: 
  void setA(int a) {
    this -> a = a;
  }

  int getA() {
    return a;
  }

  void printA() {
    cout << "A: " << getA() << endl;
  }
};

class B: public A {
  private: 
  int b;

  public:
  void setB(int b) {
    this -> b = b;
  }

  int getB() {
    return b;
  }

  void printB() {
    cout << "B: " << getB() << endl;
  }
};

int main() {
  A a;
  a.setA(100);
  a.printA();

  B b;
  b.setA(200);
  b.setB(300);
  b.printA();
  b.printB();
  return 0;
}