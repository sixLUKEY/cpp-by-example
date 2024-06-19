#include <array>
#include <iostream>
#include <unordered_set>

int main() {
  std::array numbers{1, 2, 42, 8, 0, -7, 2, 5, 10, 3, -200, 5, 42, -7, 3, -200};

  std::unordered_set<int> uniqueNumbers;
  for (auto n : numbers) {
    uniqueNumbers.insert(n);
  }

  std::cout << uniqueNumbers.size() << " unique numbers\n";
}
