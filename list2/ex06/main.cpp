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
    
    std::print("Digite um multiplo para testar: ");
    std::flush(std::cout);
    std::getline(std::cin, input);
    auto cmp = std::stoi(input);

    std::println("{} {}é multiplo de {}", res, res % cmp == 0 ? "" : "não ", cmp);
}