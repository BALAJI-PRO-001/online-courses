#include <iostream>
#include <string>
using namespace std;

class User {
  private:
  string name;
  string email;
  string password;

  public:
  User(string name, string email, string password) {
    this -> name = name;
    this -> email = email;
    this -> password = password;
  }

  void printUserInfo() {
    cout << "\nName: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Password: " << password << endl;
  }
};

int main() {
  string name, email, password;

  cout << "Enter name: ";
  cin >> name;

  cout << "Enter email: ";
  cin >> email;

  cout << "Enter password: ";
  cin >> password;

  User user(name, email, password);
  user.printUserInfo();
  return 0;
}