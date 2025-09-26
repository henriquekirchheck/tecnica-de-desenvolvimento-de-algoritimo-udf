#include <iostream>
#include <ostream>
#include <print>
#include <string>
int main() {
  std::string input;

  std::print("Digite numero: ");
  std::flush(std::cout);
  std::getline(std::cin, input);

  auto num = std::stof(input);

  std::println("{}", (num >= 20 && num <= 90) ? "Está entre 20 e 90"
                                              : "Não está entre 20 e 90");
}