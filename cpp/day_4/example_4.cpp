#include <iostream>
#include <string>
using namespace std;

/*
  Static Keyword
*/

class User {
  private: 
  static int count;
  string name;

  public: 
  User(string name) {
    this -> name = name;
    count++;
  }

  int getUsersCount() {
    return count;
  }
};

int User::count = 0;

int main() {
  User user1("Ram");
  User user2("Sam");
  User user3("Kumar");
  User user4("User4");

  cout << "Total Users: " << user1.getUsersCount();
  return 0;
}