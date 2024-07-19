#include <iostream>
#include <string>

class Person {
public:
  int age = 54;
  std::string name = "Lucas";
};

int main() {
  // These both call the constructor of Person
  Person person;
  Person person2 = Person();
  std::cout << person.name << "\n";
  std::cout << person2.name << "\n";
}
