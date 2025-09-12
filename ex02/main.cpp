#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
    std::string input;

    std::print("Digite o numero: ");
    std::flush(std::cout);
    std::getline(std::cin, input);
    int num = std::stoi(input);

    if (num % 2 == 0) {
        std::println("Par");
    } else {
        std::println("Impar");
    }
}