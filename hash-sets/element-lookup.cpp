#include <iostream>
#include <string>
#include <unordered_set>

int main() {
  std::unordered_set<std::string> planets{
      {"Mercury"}, {"Venus"}, {"Earth"}, {"Mars"}};

  auto it = planets.find("Earth");
  if (it != planets.end()) {
    std::cout << *it << "\n";
  } else {
    std::cout << "No such planet exists?!?\n";
  }

  it = planets.find("RedPlanet");
  if (it != planets.end()) {
    std::cout << *it << "\n";
  } else {
    std::cout << "No such planet exists?!?\n";
  }
}
