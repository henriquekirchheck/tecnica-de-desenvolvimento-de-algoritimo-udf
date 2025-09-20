#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
    std::string input;

    std::print("Digite uma temperatura em ºC: ");
    std::flush(std::cout);
    std::getline(std::cin, input);

    auto res = std::stof(input);
    std::println("A temperatura em Farenheit: {:.2f}", res * 1.8 + 32);
}