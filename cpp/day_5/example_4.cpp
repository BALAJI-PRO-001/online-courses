#include <iostream>
using namespace std;

/*
  Protected Access specifier in inheritance.
*/

class A {
  protected: 
  int a;
};

class B: public A {
  private: 
  int b;

  public: 
  void setB(int b) {
    this -> b = b;
  }

  void setA(int a) {
    this -> a = a;
  }

  void printMembers() {
    cout << "A: " << a << " B: " << b;
  }
};

int main() {
  B b;
  b.setA(100);
  b.setB(200);
  b.printMembers();
  return 0;
}