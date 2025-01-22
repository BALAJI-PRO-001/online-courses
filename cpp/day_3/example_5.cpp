#include <iostream>
#include <string>
using namespace std;

class User {
  public:
  string name;
  string email;
  string password;

  void getUserInfo() {
    cout << "\nEnter name: ";
    cin >> name;
    cout << "Enter email: ";
    cin >> email;
    cout << "Enter password: ";
    cin >> password;
  }

  void printUserInfo() {
    cout << "\n\nName: " << name;
    cout << "\nEmail: " << email;
    cout << "\nPassword: " << password;
  }
};

int main() {
  User user1, user2;

  user1.getUserInfo();
  user2.getUserInfo();

  user1.printUserInfo();
  user2.printUserInfo();
  return 0;
}