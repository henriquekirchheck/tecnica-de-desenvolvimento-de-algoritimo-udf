#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
  std::string input;

  std::print("Digite o nome da primeira pessoa: ");
  std::flush(std::cout);
  std::getline(std::cin, input);

  auto name1 = input;

  std::print("Digite o peso da primeira pessoa: ");
  std::flush(std::cout);
  std::getline(std::cin, input);

  auto weight1 = std::stof(input);

  std::print("Digite o nome da segunda pessoa: ");
  std::flush(std::cout);
  std::getline(std::cin, input);

  auto name2 = input;

  std::print("Digite o peso da segunda pessoa: ");
  std::flush(std::cout);
  std::getline(std::cin, input);

  auto weight2 = std::stof(input);

  if (weight1 > weight2) {
    std::println("{}", name1);
  } else {
    std::println("{}", name2);
  }
}