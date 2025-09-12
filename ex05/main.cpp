#include <iostream>
#include <print>
#include <string>

int main() {
  std::string input;

  std::print("Digite o numero para ver a tabuada: ");
  std::flush(std::cout);
  std::getline(std::cin, input);
  int num = std::stoi(input);

  for (int i = 0; i <= 10; i++) {
    std::println("{} * {} = {}", num, i, num * i);
  }
}