#include <stdio.h>
#define pf printf
#define sf scanf

/*
  Key Points about Structures
  ============================
  1. Definition:
     - A structure is a user-defined data type that groups together variables of different data types into a single entity.
  
  2. Members:
     - Each variable within a structure is called a "member."
     - Members can include integers, floats, arrays, or other data types.
  
  3. Usage:
     - Structures are used to represent complex data logically, such as representing a student with properties like name, age, and grade.
  
  4. Declaration and Access:
     - A structure is defined using the `struct` keyword (in C/C++).
     - Members are accessed using the dot operator (`.`) for individual variables.

  5. Nested Structures:
     - Structures can be nested, meaning one structure can contain another as a member.
     - This allows for hierarchical data organization.
*/

/*
  struct <structName> {
    <dataType> <variableName>;
    ....
  };
  struct <structName> <objectName>;

  <objectName>.<memberName>
*/


struct User {
  char name[30];
  int age;
  char gender;
  char email[30];
  char password[30];
  float salary;
};

struct User user;

int main() {
  pf("Enter name: ");
  sf("%s", &user.name);

  pf("Enter age: ");
  sf("%d", &user.age);

  pf("Enter gender: ");
  sf(" %c", &user.gender);

  pf("Enter email: ");
  sf("%s", &user.email);

  pf("Enter password: ");
  sf("%s", &user.password);

  pf("Enter salary: ");
  sf("%f", &user.salary);

  pf("\nName: %s", user.name);
  pf("\nAge: %d", user.age);
  pf("\nGender: %c", user.gender);
  pf("\nEmail: %s", user.email);
  pf("\nPassword: %s", user.password);
  pf("\nSalary: %f", user.salary);

  return 0;
}