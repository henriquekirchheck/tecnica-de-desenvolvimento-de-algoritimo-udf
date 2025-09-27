#include <print>
#include <ranges>

int main() {
  for (int i : std::views::iota(0, 10001) |
                   std::views::filter([](auto i) { return i % 2 == 0; })) {
    std::println("{}", i);
  }
}
