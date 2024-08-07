#include <iostream>

#ifndef SYSTEM
#define SYSTEM "NOT FOUND"
#endif // !SYSTEM

auto sum(int a, int b) { return a + b; }
int main() {
  std::cout << "Hello World\n";
  std::cout << "Sum of 2 + 1 :" << sum(2, 1) << std::endl;
  std::cout << "Current system:" << SYSTEM << std::endl;
}
