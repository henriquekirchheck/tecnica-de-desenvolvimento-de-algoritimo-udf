#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
  std::string input;

  std::print("Digite sua cor favorita: ");
  std::flush(std::cout);
  std::getline(std::cin, input);

  std::println("Você gosta da cor {}", input);
}