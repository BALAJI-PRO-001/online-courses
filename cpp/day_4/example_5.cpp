#include <iostream>
#include <string>
using namespace std;

struct User {
  string name;
  string email;
  string password;

  void getUserInfo() {
    cout << "Enter name: " << name;
    cin >> name;
    cout << "Enter email: " << email;
    cin >> email;
    cout << "Enter password: ";
    cin >> password;
  }

  void printUserInfo() {
    cout << "\nName: " << name;
    cout << "\nEmail: " << email;
    cout << "\nPassword: " << password;
  }
};

int main() {
  struct User user;
  user.getUserInfo();
  user.printUserInfo();
  return 0;
}