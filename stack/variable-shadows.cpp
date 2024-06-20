#include <iostream>

int main() {
  int a = 4;
  std::cout << "a: " << a << ", &a: " << &a << "\n";

  {
    // Assign thhe same "a" from outer scope
    a = 8;
    std::cout << "  a: " << a << ", &a: " << &a << "\n";

    {
      // *Shadow* the outer scope's "a", create new "a"
      int a = 12;
      std::cout << "   a: " << a << ", &a: " << &a << "\n";
    }

    std::cout << "  a: " << a << ", &a: " << &a << "\n";
  }

  std::cout << "a: " << a << ", &a: " << &a << "\n";
}
