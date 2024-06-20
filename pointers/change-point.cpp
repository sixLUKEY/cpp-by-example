#include <iostream>

int main() {
  int answer = 42;
  int anotherAnswer = 7;

  int *pointer = &answer;
  std::cout << *pointer << "\n";

  pointer = &anotherAnswer;
  std::cout << *pointer << "\n";
}
