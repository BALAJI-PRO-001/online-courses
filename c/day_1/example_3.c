#include <stdio.h>

int main() {
  char name[10] = "Ram";
  int age = 10;
  char gender = 'M';
  char email[50] = "ram@gmail.com";
  char password[50] = "ram@#$";
  float salary = 1000.00;

  printf("Name: %s", name);
  printf("\nAge: %d", age);
  printf("\nGender: %c", gender);
  printf("\nEmail: %s", email);
  printf("\nPassword: %s", password);
  printf("\nSalary: %f", salary);
  return 0;
}
