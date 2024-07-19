#include <cstdio>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <string>

// A low-level File class
class File {
public:
  File(const std::string &path, const std::string &mode) {
    file_ = fopen(path.c_str(), mode.c_str());
    if (!file_) {
      throw std::runtime_error("Failed to open " + path + " with mode");
    }
  }

  ~File() { fclose(file_); }

private:
  FILE *file_;
};

int main() {
  try {
    File file("some_path_that_doesnt_exist", "r");
  } catch (const std::exception &e) {
    std::cout << e.what();
  }
}
