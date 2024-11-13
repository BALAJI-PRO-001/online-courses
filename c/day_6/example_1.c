#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define pf printf
#define sf scanf

int main() {
/* 
  String Functions
  ================
  1) gets() => Get a string from the user.
  2) puts() => Output a string to the console.
  3) strlen() => Return the length of a given string.
  4) strcpy() => Copy string data from one variable to another.
  5) strcmp() => Compare two strings.
  6) strcat() => Concatenate two strings into one string.
  7) isdigit() => Check if the given character is a digit.
  8) isspace() => Check if the given character is a space.
  9) isalpha() => Check if the given character is alphabetic.
  10) tolower() => Convert the given character to lowercase.
  11) toupper() => Convert the given character to uppercase.
  12) isupper() => Check if the given character is uppercase.
  13) islower() => Check if the given character is lowercase.
*/ 

  char name[30];
  printf("Enter your name: ");
  gets(name);
  
  printf("Your name is: %s", name);

  // ###############################################

  char name[30];
  pf("Enter your name: ");
  sf("%s", &name);

  puts(name);
  puts("HI");
  puts("1000");

  // ###############################################
  char pin[10];
  pf("Enter your pin: ");
  sf("%s", &pin);

  if (strlen(pin) == 4) {
    pf("Your pin is correct ....");
  } else {
    pf("Your pin is incorrect ....");
  }

  pf("Length: %d", strlen("F@#1"));

  int len = strlen("Ram");
  pf("Len: %d", len);

  // ###############################################
  char name[] = "Ram";
  char temp[30];

  pf("Before: %s", temp);
  strcpy(temp, name);
  pf("\nAfter: %s", temp);

  // ###############################################
  const char ADMIN_PASSWORD[] = "Admin@123";
  char userInput[30];

  pf("Enter your password: ");
  sf("%s", &userInput);

  if (strcmp(ADMIN_PASSWORD, userInput) == 0) {
    pf("Your password is correct ....");
  } else {
    pf("Your password is incorrect ....");
  }

  pf("Output: %d", strcmp("HI", "HI"));
  // ###############################################

  /*
    char fname[] = "Ram";
    char sname[] = "Kumar";
    char fullName[30];

    strcat(fullName, fname); => "" + "Ram" => "Ram";
    strcat(fullName, sname); => "Ram" + "Kumar" => "RamKumar";

    pf("FullName: %s", fullName);
  */

  char fname[30], sname[30], fullName[30];
  pf("Enter fname: ");
  sf("%s", &fname);

  pf("Enter sname: ");
  sf("%s", &sname);

  strcat(fullName, fname); // => "" + "Ram" => "Ram"
  strcat(fullName, " ");   // => "Ram" + " " => "Ram "
  strcat(fullName, sname); // => "Ram " + "Kumar" => "Ram Kumar"

  pf("FullName: %s", fullName);

// ###############################################
  char ch;
  pf("Enter your character: ");
  sf("%c", &ch);
  
  if (isdigit(ch)) {
    pf("Yes");
  } else {
    pf("No");
  }

// ###############################################
  char ch;
  pf("Enter your character: ");
  sf("%c", &ch);
  
  if (isspace(ch)) {
    pf("Yes");
  } else {
    pf("No");
  }
// ###############################################
  char ch;
  pf("Enter your character: ");
  sf("%c", &ch);
  
  if (isalpha(ch)) {
    pf("Yes");
  } else {
    pf("No");
  }
// ###############################################

  char ch;
  pf("Enter your character: ");
  sf("%c", &ch);
  
  if (isupper(ch)) {  // islower(ch)
    pf("Yes");
  } else {
    pf("No");
  }
// ###############################################

  pf("Uppercase: %c", toupper('a'));
  pf("\nLowercase: %c", tolower('A'));

  char name[] = "Ram Kumar";
  int len = strlen(name);

  for (int i = 0; i < len; i++) {
    pf("%c", toupper(name[i]));
  }

  pf("\n");

  for (int i = 0; i < len; i++) {
    pf("%c", tolower(name[i]));
  }

// ###############################################
  for (int i = 0; i <= 127; i++) {
    pf("\nASCII: %d   Char: %c", i, i);
  }

  return 0;
}