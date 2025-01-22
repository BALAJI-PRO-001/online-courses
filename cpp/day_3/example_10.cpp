#include <iostream>
using namespace std;

class Message {
  public:
  Message() {
    cout << "Msg from cons." << endl;
  }

  void printMessage() {
    cout << "Msg from method.";
  }
};

int main() {
  Message msg;
  // msg.printMessage();
  return 0;
}