#include <cstdio>
#include <print>
#include <ranges>

int main() {
  for (int i : std::views::iota(1, 101)) {
    std::println("{}", i);
  }
}
