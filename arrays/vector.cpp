#include <iostream>
#include <vector>

int main() {
  std::vector<int> v;
  v.push_back(42);

  std::cout << v.size() << "\n";
  std::cout << v.back() << "\n";

  std::vector<int> x{1, 2, 3};
  v.pop_back();

  std::cout << x.size() << "\n";
  std::cout << x.back() << "\n";
}
