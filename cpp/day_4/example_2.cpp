#include <iostream>
#include <string>
using namespace std;

/*
  Function Template
  =================
  A function template defines a blueprint for a function that can operate with different data types. 
  It allows you to write a single function that works with various types without duplicating code.
*/

/*
  void print(int data) {
    cout << "Integer Data: " << data << endl;
  }

  void print(double data) {
    cout << "Float Data: " << data << endl;
  }

  void print(char data) {
    cout << "Character Data: " << data << endl;
  }

  void print(string data) {
    cout << "String Data: " << data << endl;
  }
*/

template <typename T>
void print(T data) {
  cout << "Data: " << data << endl;
}

int main() {
  print(100);
  print(100.0);
  print('*');
  print("!@#c");
  return 0;
}