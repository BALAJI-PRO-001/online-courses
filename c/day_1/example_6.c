#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  char name[30], email[50], password[10];
  char gender;
  int age;
  float salary;

  pf("Enter name: ");
  sf("%s", &name);

  pf("Enter age: ");
  sf("%d", &age);

  pf("Enter email: ");
  sf("%s", &email);

  pf("Enter password: ");
  sf("%s", &password);

  pf("Enter salary: ");
  sf("%f", &salary);

  pf("Enter gender: ");
  fflush(stdin); // This function used to clear garbage value from stdin.
  sf("%c", &gender);


  pf("\n\nName: %s", name);
  pf("\nAge: %d", age);
  pf("\nGender: %c", gender);
  pf("\nEmail: %s", email);
  pf("\nPassword: %s", password);
  pf("\nSalary: %f", salary);
  return 0;
}