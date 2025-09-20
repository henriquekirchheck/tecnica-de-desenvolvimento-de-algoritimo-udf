#include <array>
#include <iostream>
#include <print>
#include <string>
#include <ranges>

const std::array<int, 8> BILLS = {200, 100, 50, 20, 10, 5, 2, 1};

int main() {
  std::string input;

  std::print("Digite a quantidade de dinheiro para retirar: ");
  std::flush(std::cout);
  std::getline(std::cin, input);
  
  int num = std::stoi(input);
  std::array<int, 8> res;

  for (auto [BILL, res] : std::views::zip(BILLS, res)) {
    res = num / BILL;
    num %= BILL;
    std::println("R${}: {}", BILL, res);
  }
}