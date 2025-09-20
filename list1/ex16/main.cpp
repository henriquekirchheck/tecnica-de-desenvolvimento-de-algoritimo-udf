#include <iostream>
#include <ostream>
#include <print>
#include <string>

int main() {
    std::string input;

    std::print("Digite o salario fixo do vendedor: R$");
    std::flush(std::cout);
    std::getline(std::cin, input);
    auto fixed = std::stof(input);
    
    std::print("Digite o valor total de vendas no mês: R$");
    std::flush(std::cout);
    std::getline(std::cin, input);
    auto sales = std::stof(input);

    std::print("Digite o percentual de comissão do vendedor (%): ");
    std::flush(std::cout);
    std::getline(std::cin, input);
    auto porcentage = std::stof(input);

    std::println("O salario bruto é R${:.2f}", fixed + (sales * (porcentage / 100)));
}