#include <stdio.h>
#define pf printf
#define sf scanf

int main() {
  int count;

  pf("Enter user count: ");
  sf("%d", &count);

  for (int i = 1; i <= count; i++) {
    pf("\nUser: %d\n", i);

    pf("Enter name: ");
    char name[30];
    sf("%s", &name);

    pf("Enter email: ");
    char email[30];
    sf("%s", &email);

    pf("Enter password: ");
    char password[30];
    sf("%s", &password);

    pf("\nName: %s", name);
    pf("\nEmail: %s", email);
    pf("\nPassword: %s", password);
  }

  return 0;
}