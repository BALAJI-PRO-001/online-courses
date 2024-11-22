#include <stdio.h>
#define pf printf
#define sf scanf

struct Student {
  int id;

  struct PersonalData {
    char name[30];
    int age;
    char gender;
    char email[40];
    char address[50];
  } data;

  struct MarkList {
    int mark1, mark2, mark3, total;
    float avg;
  } list;
};

struct Student student;

int main() {
  pf("Enter id: ");
  sf("%d", &student.id);

  pf("Enter name: ");
  sf("%s", &student.data.name);

  pf("Enter age: ");
  sf("%d", &student.data.age);

  pf("Enter gender: ");
  sf(" %c", &student.data.gender);

  pf("Enter email: ");
  sf("%s", &student.data.email);

  pf("Enter address: ");
  sf("%s", &student.data.address);

  pf("Enter mark 1: ");
  sf("%d", &student.list.mark1);

  pf("Enter mark 2: ");
  sf("%d", &student.list.mark2);

  pf("Enter mark 3: ");
  sf("%d", &student.list.mark3);

  student.list.total = student.list.mark1 + 
                       student.list.mark2 + 
                       student.list.mark3;

  student.list.avg = student.list.total / 3;
  
  pf("\nId: %d", student.id);
  pf("\nName: %s", student.data.name);
  pf("\nAge: %d", student.data.age);
  pf("\nGender: %c", student.data.gender);
  pf("\nEmail: %s", student.data.email);
  pf("\nAddress: %s", student.data.address);
  pf("\nMark 1: %d", student.list.mark1);
  pf("\nMark 2: %d", student.list.mark2);
  pf("\nMark 3: %d", student.list.mark3);
  pf("\nTotal: %d", student.list.total);
  pf("\nAvg: %f", student.list.avg);
 
  return 0;
}