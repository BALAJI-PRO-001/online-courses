#include <iostream>
using namespace std;

class Message {
  public:
  void printMessage();
};

void Message::printMessage() {
  cout << "HI";
}

int main() {
  Message msg;
  msg.printMessage();
  return 0;
}