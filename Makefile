all:  test_Primes

test_Primes: test_Primes.cpp PrimeFactory.hpp PrimeSieve.cpp PrimeSieve.hpp
	g++ -std=c++0x -o test_Primes test_Primes.cpp PrimeSieve.cpp