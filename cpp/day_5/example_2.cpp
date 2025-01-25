#include <iostream>
using namespace std;

/*
  Public Access specifier in inheritance.
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
  B b;
  b.a = 100;
  b.b = 200;
  b.printA();
  b.printB();
  return 0;
}