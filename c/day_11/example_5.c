#include <stdio.h>
#define pf printf
#define sf scanf

struct User {
  char name[30];
  char email[30];
  char password[30];
};

struct User user;

void getUserInfo();
void printUserInfo();

int main() {
  getUserInfo();
  printUserInfo();
  return 0;
}

void getUserInfo() {
  pf("Enter name: ");
  sf("%s", &user.name);

  pf("Enter email: ");
  sf("%s", &user.email);

  pf("Enter password: ");
  sf("%s", &user.password);
}

void printUserInfo() {
  pf("\nName: %s", user.name);
  pf("\nEmail: %s", user.email);
  pf("\nPassword: %s", user.password);
}