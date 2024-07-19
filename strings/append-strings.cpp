#include <iostream>
#include <string>

int main() {
  std::string sentence = "She";
  sentence.append(" is visiting");
  sentence += " the MUSEUM!";

  std::cout << sentence << "\n";
}
