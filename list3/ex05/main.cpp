#include <print>
#include <ranges>

int main() {
  for (int i : std::views::iota(0, 101) |
                   std::views::transform([](auto i) { return 100 - i; })) {
    std::println("{}", i);
  }
}
