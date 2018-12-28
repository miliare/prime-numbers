#include <iostream>
#include <list>

using namespace std;

class PrimeFactors {

public:
	static list<int> generate(int value) {
		list<int> *primes = new list<int>;
		if (value == 2) {
			primes->push_back(2);
		}
		return *primes;
	}
};
