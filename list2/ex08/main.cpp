#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
    std::string input;

    std::print("Digite um numero: ");
    std::flush(std::cout);
    std::getline(std::cin, input);

    auto res = std::stof(input);

    std::println("{}", res > 20 ? res / 2 : res * 2);
}