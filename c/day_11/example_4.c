#include <stdio.h>
#define pf printf
#define sf scanf

struct Student {
  char name[30];
  int regNumber, total;
  char gender;
  float avg;

  union MarkList {
    int m1, m2, m3;
  } list;
};

struct Student student;

int main() {
  pf("Enter name: ");
  sf("%s", &student.name);

  pf("Enter regNumber: ");
  sf("%d", &student.regNumber);

  pf("Enter gender: ");
  sf(" %c", &student.gender);

  pf("Enter mark 1: ");
  sf("%d", &student.list.m1);

  student.total = student.list.m1 + student.list.m2 + student.list.m3;
  student.avg = student.total / 3;

  pf("\nName: %s", student.name);
  pf("\nRegNumber: %d", student.regNumber);
  pf("\nGender: %c", student.gender);
  pf("\nMark 1: %d", student.list.m1);
  pf("\nMark 2: %d", student.list.m2);
  pf("\nMark 3: %d", student.list.m3);
  pf("\nTotal: %d", student.total);
  pf("\nAvg: %f", student.avg);

  return 0;
}