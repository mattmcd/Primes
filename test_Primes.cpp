#include <iostream>
#include <sstream>
#include "PrimeSieve.hpp"

int main(int argc, char *argv[])
{
  int N = 1000;

  if (argc == 2) {
    // Convert cmd line arg into input string stream
    std::stringstream is(argv[1]);
    is >> N;
  }   

  auto pf = PrimeSieve();
  auto v = pf.getPrimes(N);

  for (auto p : v)
    std::cout << p << " ";

  std::cout << std::endl;

  std::cout << "There are " << v.size() << " primes less than " << N << std::endl;

  return 0;
}