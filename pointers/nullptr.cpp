#include <iostream>
#include <ostream>

using std::cout;

int main() {
  int answer = 42;
  int *pointer = nullptr;

  if (pointer) {
    cout << "Pointer points to value: " << *pointer << "\n";
  } else {
    cout << "Pointer points to nothing\n";
  }

  pointer = &answer;

  if (pointer) {
    cout << "Pointer points to value: " << *pointer << "\n";
  } else {
    cout << "Pointer points to nothing\n";
  }

  cout << "We're going to crash now!" << std::endl;
  pointer = nullptr;
  cout << *pointer << "\n"; // CRASH!!
}
