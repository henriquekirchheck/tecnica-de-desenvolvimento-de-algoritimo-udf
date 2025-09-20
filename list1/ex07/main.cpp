#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
    std::string input;

    std::print("Digite um numero inteiro: ");
    std::flush(std::cout);
    std::getline(std::cin, input);

    auto res1 = std::stoi(input);

    std::print("Digite um numero de ponto flutuante: ");
    std::flush(std::cout);
    std::getline(std::cin, input);

    auto res2 = std::stof(input);

    std::println("Você informou os numeros {} e {:.2f}", res1, res2);
}