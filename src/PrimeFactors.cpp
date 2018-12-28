#include <iostream>
#include <list>

using namespace std;

class PrimeFactors {

public:
	static list<int> generate(int value) {
		list<int> *primes = new list<int>;
		int candidate = 2;
		while (value > 1) {
			if (value % candidate == 0) {
				primes->push_back(candidate);
				value /= candidate;
			} else {
				candidate++;
			}
		}
		return *primes;
	}
};
