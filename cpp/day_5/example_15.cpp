#include <iostream>
#include <string>
using namespace std;

/*
  Class within Class Example
*/

class Bank {
  private: 
  string name;
  string branch;
  string address;
  static int usersCount;

  public: 
  void setBankInformation(string name, string branch, string address) {
    this -> name = name;
    this -> branch = branch;
    this -> address = address;
  }

  int getUsersCount() {
    return usersCount;
  }

  void printBankInformation() {
    cout << "\nBank Name: " << name << endl;
    cout << "Bank Branch: " << branch << endl;
    cout << "Bank Address: " << address << endl;
  }

  //============================================
  class Account {
    private: 
    int id;
    string name;
    string email;
    string password;
    int amount;

    public: 
    Account() {
      id = usersCount + 1;
      amount = 0;
    }

    int getAcId() {
      return id;
    }

    void setAccountInformation(
      string name, 
      string email, 
      string password, 
      int amount
    ) {
      this -> name = name;
      this -> email = email;
      this -> password = password;
      this -> amount = amount;
    }

    void printAccountInfomation() {
      cout << "\nAccount ID: " << id << endl;
      cout << "Name: " << name << endl;
      cout << "Email: " << email << endl;
      cout << "Password: " << password << endl;
      cout << "Amount: " << amount << endl;
    }
  };

};

int Bank::usersCount = 0;

int main() {
  Bank canaraBank;
  canaraBank.setBankInformation("canara", "DGL", "2/100, DGL");
  canaraBank.printBankInformation();

  Bank::Account account1;
  account1.setAccountInformation("Ram", "ram@gmail.com", "ram!!@3", 1000);
  account1.printAccountInfomation();

  Bank::Account account2;
  account2.setAccountInformation("Ram", "ram@gmail.com", "ram!!@3", 1000);
  account2.printAccountInfomation();
  return 0;
}