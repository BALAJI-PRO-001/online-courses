#include <iostream>
using namespace std;

/*
  Class Template
  ==============
  A class template allows you to define a class that can operate with any data type. 
  It's useful for creating generic data structures or classes.
*/

template <class T>
class Print {
  public: 
  void printData(T data) {
    cout << "Data: " << data << endl;
  }
};


int main() {
  Print <int> o1;
  o1.printData(100);

  Print <double> o2;
  o2.printData(100.0);

  Print <char> o3;
  o3.printData('*');
  
  Print <string> o4;
  o4.printData("@#$");

  return 0;
}