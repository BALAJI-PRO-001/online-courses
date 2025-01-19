#include <iostream>
#include <string>
using namespace std;

int main() {
  /*
    bool b = true;
    cout << "Boolean: " << b;
  */

  string password;
  cout << "Enter password: ";
  cin >> password;

  bool isValidPassword = password.length() == 4;

  if (isValidPassword) {
    cout << "Valid password.";
  } else {
    cout << "Invalid password.";
  }

  return 0;
}