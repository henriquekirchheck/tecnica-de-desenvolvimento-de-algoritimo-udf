#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
    std::string input;

    std::print("Digite um numero de ponto flutuante: ");
    std::flush(std::cout);
    std::getline(std::cin, input);

    auto res = std::stof(input);
    std::println("Numero -> {:.2f}", res);
    std::println("Dobro desse numero -> {:.2f}", res * 2);
}