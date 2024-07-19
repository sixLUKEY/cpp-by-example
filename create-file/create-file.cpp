#include <fstream>

int main() {
  const std::string newFile = "example.txt";

  std::ofstream output(newFile);
  output << "The answer to life, the universe, everything really, is ...";
  output << 54;
}
