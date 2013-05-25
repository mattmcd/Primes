#ifndef PRIMEFACTORY_HPP
#define PRIMEFACTORY_HPP

#include <vector>

class PrimeFactory {
  public:
    PrimeFactory() {}
    virtual ~PrimeFactory() {}
    virtual std::vector<int> getPrimes(int N) =0; 
};

#endif