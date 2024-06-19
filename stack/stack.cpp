#include <iostream>

void foo(int a) {
  std::cout << "      foo() Scope\n";
  int b = 4;
  std::cout << "      a: " << a << ", &a: " << &a << "\n";
  std::cout << "      b: " << b << ", &b: " << &b << "\n";
  std::cout << "      leaving foo() Scope\n";
}

int main() {
  std::cout << "Main Scope\n";
  int a = 10;
  std::cout << "a: " << a << ", &a: " << &a << "\n";

  {
    std::cout << "  First Inner Scope\n";
    int b = 20;
    std::cout << "  a: " << a << ", &a: " << &a << "\n";
    std::cout << "  b: " << b << ", &b: " << &b << "\n";

    {
      std::cout << "   Second Inner Scope\n";
      int c = 30;
      std::cout << "   a: " << a << ", &a: " << &a << "\n";
      std::cout << "   b: " << b << ", &b: " << &b << "\n";
      std::cout << "   c: " << c << ", &c: " << &c << "\n";

      foo(a);

      std::cout << "   Leaving Second Inner Scope\n";
    }

    std::cout << "  a: " << a << ", &a: " << &a << "\n";
    std::cout << "  b: " << b << ", &b: " << &b << "\n";
    std::cout << "  Leaving First Inner Scope\n";
  }
  std::cout << "a: " << a << ", &a: " << &a << "\n";
  std::cout << "Leaving Main Scope\n";
}
