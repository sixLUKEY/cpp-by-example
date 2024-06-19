#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::unordered_map<int, std::string> statusMessages{
      {200, "Success"},
      {404, "This is not the page you're looking for :'("},
      {403, "Unauthorised"},
      {418, "You're a teapot"}};
  statusMessages.insert({503, "Something went wrong :'("});

  std::cout << statusMessages[418] << "\n";
}
