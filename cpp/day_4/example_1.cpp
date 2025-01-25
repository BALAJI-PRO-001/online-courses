#include <iostream>
#include <string>
using namespace std;

/*
  Array as class data member.
*/

class Array {
  private: 
  int nums[5];

  public:
  void getElements() {
    for (int i = 0; i < 5; i++) {
      cout << "Enter array element: ";
      cin >> nums[i];
    }
  }

  void printElements() {
    cout << "\n\nArrayElements: ";
    for (int i = 0; i < 5; i++) {
      cout << nums[i] << " ";
    }
  }
};


class Names {
  private: 
  string names[5];

  public:
  void getNames() {
    for (int i = 0; i < 5; i++) {
      cout << "Enter name: ";
      cin >> names[i];
    }
  }

  void printNames() {
    cout << "\n\nNames: ";
    for (int i = 0; i < 5; i++) {
      cout << names[i] << " ";
    }
  }
};


int main() {
  Array arr;
  arr.getElements();
  arr.printElements();

  Names names;
  names.getNames();
  names.printNames();
  return 0;
}