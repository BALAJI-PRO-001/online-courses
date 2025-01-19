#include <iostream>
using namespace std;

/*
  C++ Enums
  =========

  An enum is a special type that represents a group of constants (unchangeable values).
  To create an enum, use the enum keyword, followed by the name of the enum, and separate the enum items with a comma:

  Example
  =======
  enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 100
  }

  enum Level myLevel = MEDIUM;
  cout << "My Level: " << myLevel;
*/

enum LEVEL {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 100
};


int main() {
  enum LEVEL myLevel = LOW;
  cout << "My Level: " << myLevel;
  return 0;
}