#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
    std::string input;

    std::print("Digite um numero real: ");
    std::flush(std::cout);
    std::getline(std::cin, input);
    auto res1 = std::stof(input);
    
    std::print("Digite outro numero real: ");
    std::flush(std::cout);
    std::getline(std::cin, input);
    auto res2 = std::stof(input);

    std::println("A soma dos numeros {} e {} corresponde a {}", res1, res2, res1 + res2);
    std::println("A subtração dos numeros {} e {} corresponde a {}", res1, res2, res1 - res2);
    std::println("A divisão dos numeros {} e {} corresponde a {}", res1, res2, res1 * res2);
    std::println("A multiplicação dos numeros {} e {} corresponde a {}", res1, res2, res1 / res2);
}