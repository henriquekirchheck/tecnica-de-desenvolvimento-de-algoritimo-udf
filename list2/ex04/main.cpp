#include <iostream>
#include <ostream>
#include <print>
#include <string>
#include <compare>

int main() {
    std::string input;

    std::print("Digite um numero real: ");
    std::flush(std::cout);
    std::getline(std::cin, input);

    auto res = std::stof(input);

    auto ord =  res <=> 0;
    std::string out;
    if (ord == std::partial_ordering::equivalent) {
        out = "nulo";
    } else if (ord == std::partial_ordering::greater) {
        out = "negativo";
    } else if (ord == std::partial_ordering::less) {
        out = "positivo";
    } else if (ord == std::partial_ordering::unordered) {
        out = "incomparavel";
    }

    std::println("{} é {}", res, out);
}