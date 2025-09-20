#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
  std::string input;

  std::print("Digite sua fruta favorita: ");
  std::flush(std::cout);
  std::getline(std::cin, input);

  auto fruit = input;
  
  std::print("Digite sua verdura favorita: ");
  std::flush(std::cout);
  std::getline(std::cin, input);
  
  auto vegetable = input;

  std::println("Você gosta de {} e {}", fruit, vegetable);
}