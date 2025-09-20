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

    auto ord =  res <=> 10;
    std::string out;
    if (ord == std::partial_ordering::equivalent) {
        out = "igual à";
    } else if (ord == std::partial_ordering::greater) {
        out = "maior que";
    } else if (ord == std::partial_ordering::less) {
        out = "menor que";
    } else if (ord == std::partial_ordering::unordered) {
        out = "incomparavel à";
    }

    std::println("{} é {} 10", res, out);
}