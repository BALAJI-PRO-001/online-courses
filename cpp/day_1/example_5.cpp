#include <iostream>
using namespace std;

int main() {
  char username[30];
  int age;
  char gender;
  char email[30];
  char password[30];
  float salary;

  cout << "Enter username: ";
  cin >> username;

  cout << "Enter age: ";
  cin >> age;

  cout << "Enter gender: ";
  cin >> gender;

  cout << "Enter email: ";
  cin >> email;

  cout << "Enter password: ";
  cin >> password;

  cout << "Enter salary: ";
  cin >> salary;

  cout << "\nName: " << username << endl;
  cout << "Age: " << age << endl;
  cout << "Gender: " << gender << endl;
  cout << "Email: " << email << endl;
  cout << "Password: " << password << endl;
  cout << "Salary: " << salary << endl;
  return 0;
}