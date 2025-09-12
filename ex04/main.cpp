#include <chrono>
#include <print>
#include <thread>

int main() {
    for (int i = 10; i > 0; i--) {
      std::println("{}", i);
      std::this_thread::sleep_for(std::chrono::seconds(1));
    }    
}