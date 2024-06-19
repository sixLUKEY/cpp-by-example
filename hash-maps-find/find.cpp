#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::unordered_map<int, std::string> statusCodes{
      {200, "Success"}, {404, "This is not the page you are looking for"}};

  auto it = statusCodes.find(200);
  if (it != statusCodes.end()) {
    std::cout << it->first << ": " << it->second << "\n";
  } else {
    std::cout << "No such status code exists\n";
  }

  it = statusCodes.find(2000);
  if (it != statusCodes.end()) {
    std::cout << it->first << ": " << it->second << "\n";
  } else {
    std::cout << "No such status code\n";
  }

  it = statusCodes.find(404);
  if (it != statusCodes.end()) {
    std::cout << it->first << ": " << "\n";
  } else {
    std::cout << "No such status code\n";
  }

  // Create a new status code 503 with an empty description
  std::string description = statusCodes[503];
  std::cout << description << "\n";

  // This constructs a new key-value
  statusCodes[201] = "Oops, we meant 200";
  std::cout << statusCodes[201] << "\n";

  std::cout << statusCodes.size() << "\n";
}
