#include <iostream>
#include <string>
using namespace std;

/* 
  Returning object from function
*/

class User {
  public: 
  string name;
  string email;
  string password;
};

User getUserInput() {
  User newUser;
  cout << "Enter name: ";
  cin >> newUser.name;
  cout << "Enter email: ";
  cin >> newUser.email;
  cout << "Enter password: ";
  cin >> newUser.password;
  return newUser;
}

int main() {
  User user = getUserInput();
  cout << "\nName: " << user.name << endl;
  cout << "Email: " << user.email << endl;
  cout << "Password: " << user.password << endl;
  return 0;
}