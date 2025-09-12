#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
    std::string input;

    std::print("Digite a primeira nota: ");
    std::flush(std::cout);
    std::getline(std::cin, input);
    int num1 = std::stoi(input);
    
    std::print("Digite a segunda nota: ");
    std::flush(std::cout);
    std::getline(std::cin, input);
    int num2 = std::stoi(input);

    std::print("Digite a terceira nota: ");
    std::flush(std::cout);
    std::getline(std::cin, input);
    int num3 = std::stoi(input);

    float res = ((float)(num1 + num2 + num3)) / 3.f;

    std::println("Media: {}", res);
    if (res >= 7.f) {
        std::println("Aluno aprovado.");
    } else {
        std::println("Aluno reprovado.");
    }
}