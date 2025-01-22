#include <iostream>
#include <string> 
using namespace std;

/*
  Objects as function arguments, 
  Returning object from function
*/

class User {
  public: 
  string name;
  string email;
  string password;
};

class IO {
  public:
  void getInput(User &user) {
    cout << "Enter name: ";
    cin >> user.name;
    cout << "Enter email: ";
    cin >> user.email;
    cout << "Enter password: ";
    cin >> user.password;
  }

  void printOutput(User user) {
    cout << "\nName: " << user.name << endl;
    cout << "Email: " << user.email << endl;
    cout << "Password: " << user.password << endl;
  }
};

int main() {
  User user;
  IO io;

  io.getInput(user);
  io.printOutput(user);
  return 0;
}