#include <iostream>
#include <string>

class Person {
public:
  // We need this now because of custom constructors
  Person() = default;
  Person(int age) : age(age) {}
  Person(int age, std::string name) : age(age), name(std::move(name)) {}

  int age;
  std::string name;
};

int main() {
  Person person = Person(42);
  std::cout << "Person's age is " << person.age << "\n";

  Person person2 = Person{54, "Lukey"};
  std::cout << person2.name << "'s age is " << person2.age << "\n";
}
