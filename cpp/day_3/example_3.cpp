#include <iostream>
#include <string>
using namespace std;

/*
  Data Hiding
*/

class System {
  private:
  string password;

  public: 
  void setPassword(string password) {
    if (password.compare("Ram") == 0) {
      cout << "Invalid password." << endl;
      exit(0);
    }

    this -> password = password;
  }

  string getPassword() {
    return password;
  }
};


int main() {
  System system;
  system.setPassword("Sam");
  cout << "System Password: " << system.getPassword();
  return 0;
}