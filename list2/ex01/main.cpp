#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
    std::string input;

    std::print("Digite um numero de real: ");
    std::flush(std::cout);
    std::getline(std::cin, input);

    auto res = std::stof(input);

    std::println("{} maior que 10", res > 10 ? "É" : "Não é");
}