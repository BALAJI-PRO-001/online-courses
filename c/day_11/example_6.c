#include <stdio.h>
#define pf printf
#define sf scanf

struct User {
  char name[30];
  char email[30];
  char password[30];
};

struct User user1;
struct User user2;
struct User user3;

struct User getUserInfo();
void printUserInfo(struct User);

int main() {
  user1 = getUserInfo(); 
  user2 = getUserInfo();
  user3 = getUserInfo();

  printUserInfo(user1);
  printUserInfo(user2);
  printUserInfo(user3);
  return 0;
}
                            
struct User getUserInfo() {
  struct User user;
  pf("\nEnter name: ");
  sf("%s", &user.name);

  pf("Enter email: ");
  sf("%s", &user.email);

  pf("Enter password: ");
  sf("%s", &user.password);
  return user;
}

void printUserInfo(struct User user) {
  pf("\n\nName: %s", user.name);
  pf("\nEmail: %s", user.email);
  pf("\nPassword: %s", user.password);
}