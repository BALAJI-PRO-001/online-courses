#include <iostream>
using namespace std;

/*
  Getter, Setter
*/

class Number {
  private:
  int num;

  public:
  void setNum(int num) {
    this -> num = num;
  }

  int getNum() {
    return num;
  }

  void printNum() {
    cout << "Number: " << getNum() << endl;
  }
};

int main() {
  Number number;
  number.setNum(100);
  number.printNum();
  cout << "Number: " << number.getNum();
  return 0;
}