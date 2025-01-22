#include <iostream>
#include <string>
using namespace std;

class Message {
  public:
  void printMessage(string message) {
    cout << "Message: " << message << endl;
  }

  ~Message() {
    cout << "Des called.";
  }
};

int main() {
  Message msg;

  for (int i = 1; i <= 10; i++) {
    cout << "Running count: " << i << endl;
  }

  msg.printMessage("End ...");
  return 0;
}