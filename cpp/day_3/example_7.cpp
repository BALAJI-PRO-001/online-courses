#include <iostream>
#include <string>
using namespace std;

/*
  Array of objects
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
  int count;

  cout << "Enter user count: ";
  cin >> count;
  User users[count];

  for (int i = 0; i < count; i++) {
    string name, email, password;

    cout << "\nUser: " << (i + 1) << endl;
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter email: ";
    cin >> email;

    cout << "Enter password: ";
    cin >> password;

    users[i].setName(name);
    users[i].setEmail(email);
    users[i].setPassword(password);
  }

  cout << endl;
  for (int i = 0; i < count; i++) {
    cout << "\n\nName: " << users[i].getName();
    cout << "\nEmail: " << users[i].getEmail();
    cout << "\nPassword: " << users[i].getPassword();
  }

  return 0;
}