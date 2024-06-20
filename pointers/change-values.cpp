#include <iostream>

using std::cout;

int main() {
  int lukeAge = 23;
  int *pointer = &lukeAge;

  cout << "Luke's age is: " << lukeAge << "\n";

  *pointer = 54;
  cout << "Luke's age is: " << lukeAge << "\n";
}
