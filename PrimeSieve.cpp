#include "PrimeSieve.hpp"

std::vector<int> PrimeSieve::getPrimes(int N) {
  std::vector<bool> sieve(N);

  std::vector<int> res;

  
  // Initialise
  for ( auto it= sieve.begin(); it != sieve.end(); ++it ) (*it) = true;

  sieve[0] = false;
  bool sieveEmpty = false;
  auto nextPrimePtr = sieve.begin();
  int nextPrime = 1;
  while ( !sieveEmpty ) {
  	// Find next prime
  	while ( ( nextPrimePtr != sieve.end() ) && !(*nextPrimePtr) ) {
  		nextPrimePtr++;
  		nextPrime++;
       }
       if ( nextPrimePtr == sieve.end() ) {
         sieveEmpty = true;
       } else {
          res.push_back( nextPrime );
          for ( auto it = nextPrimePtr; it<sieve.end();  it += nextPrime ) {
            *it = false;
          }
       }    
  }
  return res;
}