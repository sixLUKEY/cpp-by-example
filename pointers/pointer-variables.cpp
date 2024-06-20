#include <iostream>

using std::cout;

int main() {
  int lukeAge = 23;
  int answer = 54;

  int *pointer = &answer;
  int *const constPointer = &answer;

  cout << "The value at pointer is: " << *pointer << "\n";
  cout << "The value at constPointer is: " << *constPointer << "\n";

  pointer = &lukeAge;

  cout << "The value at pointer is: " << *pointer << "\n";
  cout << "The value at constPointer is: " << *constPointer << "\n";
}
