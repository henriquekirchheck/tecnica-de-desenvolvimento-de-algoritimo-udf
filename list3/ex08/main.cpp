#include <algorithm>
#include <print>
#include <ranges>

int main() {
  std::println(
      "{}", std::ranges::fold_left(std::views::iota(1, 101), 0, std::plus()));
}
