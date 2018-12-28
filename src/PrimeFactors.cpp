#include <iostream>
#include <list>

using namespace std;

class PrimeFactors {

public:
	static list<int> generate(int value) {
		list<int> *primes = new list<int>;
		for (int candidate = 2; value > 1; candidate++) {
			for (; value % candidate == 0; value /= candidate) {
				primes->push_back(candidate);
			}
		}
		return *primes;
	}
};
