#include <iostream>
using namespace std;

/*
  Class within Class
*/

class Outer {
  public: 
  int num;

  void printNum() {
    cout << "Outer Num: " << num << endl;
  }

  class Inner {
    public: 
    int num;

    void printNum() {
      cout << "Inner Num: " << num << endl;
    }
  };

  Inner inner;
};

int main() {
  Outer outer;
  outer.num = 100;
  outer.printNum();

  outer.inner.num = 200;
  outer.inner.printNum();
  return 0;
}