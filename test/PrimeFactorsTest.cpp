#include <iostream>
using namespace std;

#define CATCH_CONFIG_MAIN
#include "Catch2/catch.hpp"
#include "../src/PrimeFactors.cpp"


TEST_CASE("should_generate_an_empty_list_of_prime_factors") {
	REQUIRE(PrimeFactors::generate(1).size() == 0);
}

TEST_CASE("should_return_a_list_with_value_2_when_generating_prime_factor_of_2") {
	REQUIRE(PrimeFactors::generate(2).front() == 2);
}

TEST_CASE("should_return_a_list_with_value_3_when_generating_prime_factor_of_3") {
	REQUIRE(PrimeFactors::generate(3).front() == 3);
}

TEST_CASE("should_return_a_list_with_value_2_and_2_when_generating_prime_factor_of_4") {
	list<int> *primeFactors = new list<int>;
	*primeFactors = PrimeFactors::generate(4);
	CHECK(primeFactors->front() == 2);
	CHECK(primeFactors->front() == 2);
}

TEST_CASE("should_return_a_list_with_value_3_and_3_when_generating_prime_factor_of_9") {
	list<int> *primeFactors = new list<int>;
	*primeFactors = PrimeFactors::generate(9);
	CHECK(primeFactors->front() == 3);
	CHECK(primeFactors->front() == 3);
}

TEST_CASE("should_return_a_list_with_value_2_2_2_and_2_when_generating_prime_factor_of_12") {
	list<int> *primeFactors = new list<int>;
	*primeFactors = PrimeFactors::generate(12);
	CHECK(primeFactors->front() == 2);
	CHECK(primeFactors->front() == 2);
	CHECK(primeFactors->front() == 2);
	CHECK(primeFactors->front() == 2);
}


