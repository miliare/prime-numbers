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


