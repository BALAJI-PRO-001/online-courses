#include <stdio.h>
#define pf printf
#define sf scanf

struct User {
  char name[30];
  int age;
  char gender;
  char email[30];
  char password[30];
  float salary;
};

struct User user1;  
struct User user2; 

int main() {
  pf("Enter name: ");
  sf("%s", &user1.name);

  pf("Enter age: ");
  sf("%d", &user1.age);

  pf("Enter gender: ");
  sf(" %c", &user1.gender);

  pf("Enter email: ");
  sf("%s", &user1.email);

  pf("Enter password: ");
  sf("%s", &user1.password);

  pf("Enter salary: ");
  sf("%f", &user1.salary);

  //################################

  pf("\n\nEnter name: ");
  sf("%s", &user2.name);

  pf("Enter age: ");
  sf("%d", &user2.age);

  pf("Enter gender: ");
  sf(" %c", &user2.gender);

  pf("Enter email: ");
  sf("%s", &user2.email);

  pf("Enter password: ");
  sf("%s", &user2.password);

  pf("Enter salary: ");
  sf("%f", &user2.salary);



  pf("\nName: %s", user1.name);
  pf("\nAge: %d", user1.age);
  pf("\nGender: %c", user1.gender);
  pf("\nEmail: %s", user1.email);
  pf("\nPassword: %s", user1.password);
  pf("\nSalary: %f", user1.salary);

  pf("\n\nName: %s", user2.name);
  pf("\nAge: %d", user2.age);
  pf("\nGender: %c", user2.gender);
  pf("\nEmail: %s", user2.email);
  pf("\nPassword: %s", user2.password);
  pf("\nSalary: %f", user2.salary);

  return 0;
}