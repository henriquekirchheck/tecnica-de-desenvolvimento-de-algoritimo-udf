#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
    std::string input;

    std::print("Digite o primeiro numero: ");
    std::flush(std::cout);
    std::getline(std::cin, input);
    int num1 = std::stoi(input);
    
    std::print("Digite o segundo numero: ");
    std::flush(std::cout);
    std::getline(std::cin, input);
    int num2 = std::stoi(input);

    std::println("{} + {} = {}", num1, num2, num1 + num2);
}