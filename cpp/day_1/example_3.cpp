#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  char username[10] = "Ram";
  int age = 30;
  char gender = 'M';
  char email[30] = "ram@gmail.com";
  char password[8] = "ram@#$";
  float salary = 10000;

  cout << "Name: " << username << endl;
  cout << "Age: " << age << endl;
  cout << "Gender: " << gender << endl;
  cout << "Email: " << email << endl;
  cout << "Password: " << password << endl;
  // cout << "Salary: " << salary << endl;
  printf("Salary: %f", salary);
  return 0;
}