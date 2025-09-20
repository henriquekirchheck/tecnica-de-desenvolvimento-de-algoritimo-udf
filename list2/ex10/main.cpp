#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
    std::string input;

    std::print("Digite a primeira nota (peso 2): ");
    std::flush(std::cout);
    std::getline(std::cin, input);

    auto res1 = std::stof(input);

    std::print("Digite a segunda nota (peso 3): ");
    std::flush(std::cout);
    std::getline(std::cin, input);

    auto res2 = std::stof(input);

    std::print("Digite a terceira nota (peso 5): ");
    std::flush(std::cout);
    std::getline(std::cin, input);

    auto res3 = std::stof(input);

    auto average = ((res1 * 2) + (res2 * 3) + (res3 * 5)) / 10;

    std::println("O aluno foi {}", average >= 6.0 ? "aprovado" : "reprovado");
}