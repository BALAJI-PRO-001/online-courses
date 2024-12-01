#include <stdio.h>
#define pf printf
#define sf scanf

/* Array of structures */

struct User {
  char name[30];
  char email[50];
  char password[10];
};

struct User users[3];

int main() {

  for (int i = 0; i < 3; i++) {
    pf("\nEnter name: ");
    sf("%s", &users[i].name);

    pf("Enter email: ");
    sf("%s", &users[i].email);

    pf("Enter password: ");
    sf("%s", &users[i].password);
  }

  pf("\n\n");

  for (int i = 0; i < 3; i++) {
    pf(
      "\nName: %s Email: %s Password: %s", 
      users[i].name,
      users[i].email,
      users[i].password
    );
  }

  return 0;
}