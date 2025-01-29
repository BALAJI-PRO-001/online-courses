#include <iostream>
#include <string>
using namespace std;

/*
  Hierarchical Inheritance Example
*/

class BasicInfomation {
  private: 
  int id, age;
  char gender;
  string name, email, password;
  string address;

  public:
  void setId(int id) { this -> id = id; }
  int getId() { return id; }

  void setAge(int age) { this -> age = age; }
  int getAge() { return age; }

  void setGender(char gender) { this -> gender = gender; }
  char getGender() { return gender; }

  void setName(string name) { this -> name = name; }
  string getName() { return name; }

  void setEmail(string email) { this -> email = email; }
  string getEmail() { return email; }

  void setPassword(string password) { this -> password = password; }
  string getPassword() { return password; }

  void setAddress(string address) { this -> address = address; }
  string getAddress() { return address; }
};


class Staff: public BasicInfomation {
  private: 
  string position;
  float salary;

  public: 
  void setPosition(string position) { this -> position = position; }
  string getPosition() { return position; }

  void setSalary(float salary) { this -> salary = salary; }
  float getSalary() { return salary; }
};


class Student: public BasicInfomation {
  private: 
  string grade;
  string std; 

  public: 
  void setGrade(string grade) { this -> grade = grade; }
  string getGrade() { return grade; }

  void setStd(string std) { this -> std = std; }
  string getStd() { return std; }
};


int main() {
  Staff staff;
  staff.setId(1);
  staff.setName("Ram");
  staff.setAge(20);
  staff.setGender('M');
  staff.setEmail("ram@gmail.com");
  staff.setPassword("ram!@#");
  staff.setPosition("C++ staff");
  staff.setSalary(100.00);

  Student student;
  student.setId(2);
  student.setName("Sam");
  student.setAge(10);
  student.setGender('M');
  student.setEmail("sam@gmail.com");
  student.setPassword("sam@#$");
  student.setGrade("I'st");
  student.setStd("3rd");

  //================= Print ==============================

  cout << "\nStaff Id: " << staff.getId() << endl;
  cout << "Staff Name: " << staff.getName() << endl;
  cout << "Staff Age: " << staff.getAge() << endl;
  cout << "Staff Gender: " << staff.getGender() << endl;
  cout << "Staff Email: " << staff.getEmail() << endl;
  cout << "Staff Password: " << staff.getPassword() << endl;
  cout << "Staff Position: " << staff.getPosition() << endl;
  cout << "Staff Salary: " << staff.getSalary() << endl;


  cout << "\n\nStudent Id: " << student.getId() << endl;
  cout << "Student Name: " << student.getName() << endl;
  cout << "Student Age: " << student.getAge() << endl;
  cout << "Student Gender: " << student.getGender() << endl;
  cout << "Student Email: " << student.getEmail() << endl;
  cout << "Student Password: " << student.getPassword() << endl;
  cout << "Student Grade: " << student.getGrade() << endl;
  cout << "Student Std: " << student.getStd() << endl;

  return 0;
}