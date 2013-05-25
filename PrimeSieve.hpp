#include "PrimeFactory.hpp"

class PrimeSieve : public PrimeFactory { 
	public:
		std::vector<int> getPrimes(int N);
};
