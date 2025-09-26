#include <compare>
#include <iostream>
#include <ostream>
#include <print>
#include <string>
int main() {
  std::string input;

  std::print("Digite um numero: ");
  std::flush(std::cout);
  std::getline(std::cin, input);

  auto num1 = std::stoi(input);

  std::print("Digite outro numero: ");
  std::flush(std::cout);
  std::getline(std::cin, input);

  auto num2 = std::stoi(input);

  auto ord = num1 <=> num2;
  std::string out;
  if (ord == std::strong_ordering::equivalent) {
    out = "igual à";
  } else if (ord == std::strong_ordering::greater) {
    out = "maior que";
  } else if (ord == std::strong_ordering::less) {
    out = "menor que";
  }

  std::println("{} é {} {}", num1, out, num2);
}