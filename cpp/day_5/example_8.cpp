#include <iostream>
#include <string>
using namespace std;

/*
  Multiple Inheritance Example
*/

class BasicInformation {
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

class Govt {
  private:
  int govtId;

  public: 
  void setGovtId(int govtId) {
    this -> govtId = govtId;
  }

  int getGovtId() {
    return govtId;
  }
};

class User: public BasicInformation, public Govt {
  private: 
  int id;

  public: 
  void setId(int id) {
    this -> id = id;
  }

  int getId() {
    return id;
  }
};

int main() {
  User user;
  user.setId(1);
  user.setGovtId(123);
  user.setName("Ram");
  user.setEmail("ram@gmail.com");
  user.setPassword("ram!@#");

  cout << "Id: " << user.getId() << endl;
  cout << "GovtId: " << user.getGovtId() << endl;
  cout << "Name: " << user.getName() << endl;
  cout << "Email: " << user.getEmail() << endl;
  cout << "Password: " << user.getPassword() << endl;
  return 0;
}