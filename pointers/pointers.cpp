#include <iostream>

using std::cout;

int main() {
  int answer = 42;
  int *addressOfAnswer = &answer;

  cout << "The Answer is: " << answer << "\n";

  cout << "The address of answer is: " << addressOfAnswer << "\n";

  cout << "The answer (through a pointer) is: " << *addressOfAnswer << "\n";
}
