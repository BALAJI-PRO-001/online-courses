#include <iostream>
using namespace std;

/*
  Inheritance
  ===========
  Inheritance is a mechanism in object-oriented programming (OOP) where one class 
  (derived class) acquires the properties and behaviors (members) of another class (base class). 
  It promotes code reuse and establishes a relationship between classes.

  Types Of Inheritance
  ====================
    * Single Inheritance: One derived class inherits from one base class.
    * Multiple Inheritance: One derived class inherits from multiple base classes.
    * Multilevel Inheritance: A class is derived from another derived class (chain of inheritance).
    * Hierarchical Inheritance: Multiple classes inherit from a single base class.
    * Hybrid Inheritance: Combination of two or more types of inheritance.
    
    +-----------------+
    |    Base Class   |
    +-----------------+
            |
            |
            v
    +-----------------+
    |  Derived Class  |
    +-----------------+
    
          (OR)

    +-----------------+
    |    Parent Class |
    +-----------------+
            |
            |
            v
    +-----------------+
    |  Child Class    |
    +-----------------+

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