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

    std::print("Digite outro numero inteiro: ");
    std::flush(std::cout);
    std::getline(std::cin, input);

    auto res2 = std::stoi(input);

    auto res = res1 + res2;

    std::println("{}", res > 10 ? res * res : ((float) res) / 2);
}