#include <iostream>
#include <string>
using namespace std;

/* 
  Default constructor
*/

class Message {
  public: 
  Message(string message) {
    cout << "Message: " << message;
  }
};

int main() {
  Message msg("HI");
  return 0;
}