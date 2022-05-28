#include "Span.hpp"

int main() {
  Span sp = Span(1000000);
  sp.fillRange(1, 1000000);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
return 0; }