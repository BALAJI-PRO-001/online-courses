#include <iostream>
#include <string>
using namespace std;

/*
  Public and Private access specifiers in real word application.
*/

class BasicInformation {
  private: 
  int age;
  char gender;
  float salary;
  string name;
  string email;
  string password;

  public:
  void setName(string name) {
    this -> name = name;
  }

  string getName() {
    return name;
  }
  
  void setAge(int age) {
    this -> age = age;
  }

  int getAge() {
    return age;
  }

  void setGender(char gender) {
    this -> gender = gender;
  }

  int getGender() {
    return gender;
  }

  void setEmail(string email) {
    this -> email = email;
  }

  string getEmail() {
    return email;
  }

  void setPassword(string password) {
    this -> password = password;
  }

  string getPassword() {
    return password;
  }

  void setSalary(float salary) {
    this -> salary = salary;
  }

  float getSalary() {
    return salary;
  }
};

class User: public BasicInformation {
  private: 
  int id;

  public: 
  void setId(int id) {
    this -> id = id;
  }

  int getId() {
    return id;
  }

  void getUserInfo() {
    string name, email, password;
    char gender;
    int age;
    float salary;

    cout << "Enter id: ";
    cin >> id;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter gender: ";
    cin >> gender;

    cout << "Enter email: ";
    cin >> email;

    cout << "Enter password: ";
    cin >> password;

    cout << "Enter salary: ";
    cin >> salary;

    // this -> id = id;
    setId(id);
    setName(name);
    setAge(age);
    setGender(gender);
    setEmail(email);
    setPassword(password);
    setSalary(salary);
  }

  void printUserInfo() {
    // cout << "\n\nId: " << id << endl; 
    cout << "\n\nId: " << getId() << endl; 
    cout << "Name: " << getName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Gender: " << getGender() << endl;
    cout << "Email: " << getEmail() << endl;
    cout << "Password: " << getPassword() << endl;
    cout << "Salary: " << getSalary() << endl;
  }
};


int main() {
  User user;
  user.getUserInfo();
  user.printUserInfo();
  return 0;
}