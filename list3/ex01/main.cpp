#include <print>
#include <ranges>

int main() {
  for (int _ : std::views::iota(0, 10)) {
    std::print("Hello World! ");
  }
}
