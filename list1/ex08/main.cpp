#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
    std::string input;

    std::print("Digite a primeira letra do seu nome: ");
    std::flush(std::cout);
    std::getline(std::cin, input);

    if (input.length() == 1) {
        std::println("{}", input);
    } else {
        std::println("resultado invalido");
    }
}