#include <iostream>
#include <string>
using namespace std;

/*
  Data Hiding in real time.
*/

class User {
  private:
  string name;
  string email;
  string password;

  public:
  void setName(string name) {
    this -> name = name;
  }

  string getName() {
    return name;
  } 

  void setEmail(string email) {
    this -> email = email;
  }

  string getEmail() {
    return email;
  }

  void setPassword(string password) {
    this -> password = password;
  }

  string getPassword() {
    return password;
  }
};


int main() {
  User user;
  string name;
  string email;
  string password;

  cout << "Enter name: ";
  cin >> name;

  cout << "Enter email: ";
  cin >> email;

  cout << "Enter password: ";
  cin >> password;

  user.setName(name);
  user.setEmail(email);
  user.setPassword(password);

  cout << "\nName: " << user.getName() << endl;
  cout << "Email: " << user.getEmail() << endl;
  cout << "Password: " << user.getPassword();

  return 0;
}