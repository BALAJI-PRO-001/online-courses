#include <iostream>
#include <string>
using namespace std;

/*
  Class
  =====
  Definition: A class is a blueprint or template for creating objects. 
  It defines data members (variables) and member functions (methods) that operate on the data.

  Syntax:
  =======
  class <className> {
    <access-specifiers> :
    <data members>;
    ....

    <methods>
    ....
  };

  Key Characteristics:
  ====================
  1) Encapsulation: Combines data and methods in a single unit.
  2) Access Specifiers: Defines public, private, and protected members.
  3) Reusability: Classes can be reused and extended through inheritance.


  Object
  ======
  Definition: An object is an instance of a class. 
  It represents a specific entity that holds actual values for the class's data members and can call its member functions.

  Syntax: 
  =======
  <className> <objectName>;
*/

class User {
  public:
  string name; // data members
  int age;
  char gender;
  string email;
  string password;
  float salary;

  void printInfo() { // method
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Email: " << email << endl;
    cout << "Password: " << password << endl;
    cout << "Salary: " << salary << endl;
  }
};


int main() {
  User user;
  user.name = "Ram";
  user.age = 20;
  user.gender = 'M';
  user.email = "ram@gmail.com";
  user.password = "ram!@#";
  user.salary = 1000.00;

  user.printInfo();

  return 0;
}