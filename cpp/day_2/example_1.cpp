#include <iostream>
#include <string>
using namespace std;

/* 
  String in cpp
  =============
  Strings are used for storing text/characters.

  Required: #include <string>

  Example
  =======
  string strData = "S@#$'";
  cout << "String Data: " << strData;


  Methods  
  =======  
  Syntax: .append(<string>)
  doc: Appends the given string to the end of the current string.  

  Syntax: .insert(<position>, <string>)  
  doc: Inserts the given string at the specified position in the current string.  

  Syntax: .replace(<position>, <length>, <string>)  
  doc: Replaces a part of the string starting at the given position with the specified string.  

  Syntax: .substr(<position>, <length>)  
  doc: Returns a substring starting from the given position with the specified length.  

  Syntax: .find(<string>)  
  doc: Finds the first occurrence of the specified substring and returns its position.  

  Syntax: .erase(<position>, <length>)  
  doc: Removes characters from the string starting at the given position for the specified length.  

  Syntax: .clear()  
  doc: Removes all characters from the string, making it empty.  

  Syntax: .empty()  
  doc: Checks whether the string is empty.  

  Syntax: .at(<position>)  
  doc: Returns the character at the specified position in the string.  

  Syntax: .push_back(<char>)  
  doc: Appends the given character to the end of the string.  

  Syntax: .pop_back()  
  doc: Removes the last character from the string.  

  Syntax: .compare(<string>)  
  doc: Compares the current string with the specified string lexicographically.  

  Syntax: .resize(<size>, <char>)  
  doc: Resizes the string to the specified size and fills with the given character if needed.  

  Syntax: .find_last_of(<char>)  
  doc: Finds the last occurrence of the specified character and returns its position.  
*/



int main() {
  /*
    string name = "Ram";
    cout << "Name: " << name;
  */


  /* 
    Method: .append(<string>)

    string name = "Ram";
    name.append(" "); // "Ram "
    name.append("Kumar"); // "Ram Kumar"
    cout << "Name: " << name;
  */


  /* 
    Method: .insert(<position>, <string>)

    string name = "Ram";
    name.insert(1, "A"); // "RAam"
    cout << "Name: " << name;
  */


  /*
    Method: .replace(<startIndex>, <endIndex>, <string>)

    string name = "Ram";
    name.replace(0, 2, "A");
    cout << "Name: " << name;
  */


  /*
    Method: .substr(<startIndex>, <endIndex>)

    string fullName = "Sam Kumar";
    string firstName = fullName.substr(0, 3);
    string lastName = fullName.substr(4, 9);
    
    cout << "FirstName: " << firstName << endl;
    cout << "LastName: " << lastName << endl;
    cout << "FullName: " << fullName;
  */


  /*
    Method: .find(<stringToFind>)

    string name = "cadd computes";
    int index = name.find("d");
    cout << "Index: " << index; 
  */

  /*
    Method: .erase(<startIndex>, <endIndex>)

    string name = "Ram Kumar";
    name.erase(3, 9);
    cout << "Name: " << name;
  */


  /*
    Method: .clear()

    string name = "Ram Kumar";
    name.clear();
    cout << "Name: " << name;
  */

  /*
    Method: .empty()

    string data = " ";
    cout << "Output: " << data.empty();
  */

  /*
    Method: .at(<index>)

    string name = "Ram";
    char character = name.at(1);
    cout << "Second Character: " << character;
  */


  /*
    Method: .push_back(<char>)

    string name = "Ram Kuma";
    name.push_back('r');
    cout << "Name: " << name;
  */


  /*
    Method: .pop_back();

    string name = "Ram kumarr";
    name.pop_back();
    cout << "Name: " << name;
  */


  /*
    Method: .compare(<string>)

    const string SYSTEM_PASSWORD = "Admin";
    string userInput = "Admin";
    cout << "Output: " << SYSTEM_PASSWORD.compare(userInput) << endl;
    cout << "Output: " << userInput.compare(SYSTEM_PASSWORD);
  */


  /*
    Method: .length()

    string name = "Ram Kumar";
    cout << "Length: " << name.length();
  */


  /*
    Method: .resize(<size>, <char>)

    string name = "Ram kuma";
    name.resize(name.length() + 1, 'r');
    cout << "Name: " << name;
  */


  string data = "c a c";
  cout << "Index: " << data.find_last_of('c');
  return 0;
}