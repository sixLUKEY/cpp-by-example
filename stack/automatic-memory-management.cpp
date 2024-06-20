#include <iostream>
#include <string>
#include <utility>

class Talker {
public:
  explicit Talker(std::string name) : name_(std::move(name)) {
    std::cout << name_ << " here\n";
  }
  ~Talker() { std::cout << name_ << ", signing off.\n"; }

private:
  std::string name_;
};

int main() {
  std::cout << "Main Scope\n";
  Talker lucas("Lucas");
  std::cout << "&lucas: " << &lucas << "\n";

  {
    std::cout << "  First Inner Scope\n";
    Talker nish("  Nish");
    std::cout << "  &nish: " << &nish << "\n";
    std::cout << "  Leaving First Inner Scope\n";
  }
  std::cout << "Leaving Mian Scope\n";
}
