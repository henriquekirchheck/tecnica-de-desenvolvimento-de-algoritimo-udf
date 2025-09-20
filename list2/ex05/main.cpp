#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
    std::string input;

    std::print("Digite um numero inteiro: ");
    std::flush(std::cout);
    std::getline(std::cin, input);

    auto res = std::stoi(input);

    std::println("{} {}é multiplo de 3", res, res % 3 == 0 ? "" : "não ");
}