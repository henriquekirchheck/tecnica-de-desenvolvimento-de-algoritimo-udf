#include <print>
#include <ranges>

int main() {
  for (int i : std::views::iota(0, 1001) | std::views::filter([](auto i) {
                 return i % 2 == 1;
               }) | std::views::transform([](auto i) { return 1000 - i; })) {
    std::println("{}", i);
  }
}
